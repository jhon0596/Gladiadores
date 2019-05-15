//
// Created by gacova on 14/05/19.
//

#include "AStar.h"
AStar::AStar()
{
    matriz = nullptr;
    distanciaHor = 10;
    distanciaDiag = 14;
    closed = new Lista();
    open = new Lista();
    solucion = new Lista();
}

bool AStar::findPath(Matriz *matriz, int x, int y, int i, int j)
{
    this->matriz = matriz;
    clean();
    std::cout<< "Inicio find Path \n \n";
    Nodo_Matriz* start = matriz->getNodo(x,y);
    Nodo_Matriz* end = matriz->getNodo(i-1,j-1);
    std::cout<< "Buscando si hay solucion \n \n";
    std::cout<< start->getX()<< ", "<< start->getY()<< std::endl;
    std::cout<< end->getX()<< ", "<< end->getY()<< std::endl;

    return isSolution(start,end);
}

bool AStar::isSolution(Nodo_Matriz *start, Nodo_Matriz *end)
{
    Nodo_Matriz* current = start;
    start->setH(end);
    start->setG(0.0);
    start->setF();

    open->enqueue(start);

    while(open->getHead() !=nullptr && current!=end)
    {
        open->sort();

        while((open->getHead() != nullptr) && (closed->find(open->getHead()->getData()) == true))//(open->getHead()->getData()->getVisited() == true))
        {
            open->dequeue();
        }

        if(open->getHead() == nullptr) break;

        current = open->getHead()->getData();
        current->setVisited(true);
        closed->enqueue(current);

        addToOpen(current, current->getTop(), distanciaHor,end);
        addToOpen(current, current->getBottom(), distanciaHor,end);
        addToOpen(current, current->getLeft(), distanciaHor,end);
        addToOpen(current, current->getRight(), distanciaHor,end);
        //addToOpen(current, current->getDiagTopleft(), distanciaDiag,end);
        //addToOpen(current, current->getDiagTopRight(), distanciaDiag,end);
        //addToOpen(current, current->getDiagBottomleft(), distanciaDiag,end);
        //addToOpen(current, current->getDiagBottomRight(), distanciaDiag,end);

    }
    if (end->getParent() != nullptr)
    {
        current = end;
        while(current != nullptr)
        {
            solucion->enqueue(current);
            current = current->getParent();
        }
        return true;
    }else
    {
        return false;
    }
}

void AStar::printSol()
{
    std::cout<< "Solucion: ";
    solucion->printMe();
}

void AStar::printClosed()
{
    std::cout<< "Closed: ";
    closed->printMe();
}

void AStar::printOpen()
{
    std::cout<< "Open: ";
    open->printMe();
}

void AStar::clean()
{
    Nodo_Matriz* start = matriz->getStart();
    Nodo_Matriz* current;
    while (start != nullptr)
    {
        current = start;
        while (current != nullptr)
        {
            current->setH(current);
            current->setG(INFINITY);
            current->setF(INFINITY);
            current->setVisited(false);
            current->setParent(nullptr);

            current = current->getRight();
        }
        start = start->getBottom();
    }

    open->cleanMe();
    closed->cleanMe();
    solucion->cleanMe();
}


void AStar::addToOpen(Nodo_Matriz *current, Nodo_Matriz *neighbour, float distancia, Nodo_Matriz *end)
{
    if (neighbour != nullptr)
    {
        if ((closed->find(neighbour) == false) && (neighbour->getFlag() == false))
            //((neighbour->getVisited() == false) && (neighbour->getFlag() == false))
        {
            open->enqueue(neighbour);
        }else{
            std::cout<< "Era un obstaculo o ya lo habia visitado\n";
        }

        float posibleMenorG = current->getG() + distancia;

        if( posibleMenorG < neighbour->getG())
        {
            neighbour->setParent(current);
            neighbour->setG(posibleMenorG);
            neighbour->setH(end);
            neighbour->setF();
        }else{
            std::cout<< "No era mejor G\n";
        }
    }else{
        std::cout<< "Era un NULLPOINTER\n";
    }
}

Lista *AStar::getSolucion()
{
    return solucion;
}
