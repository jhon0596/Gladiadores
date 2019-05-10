#include "matriz.h"

Matriz::Matriz(int i, int j)
{
    x = i;
    y = j;
    start = nullptr;
    crear();
}

void Matriz::crear()
{
    Nodo_Matriz* onTop = nullptr;
    Nodo_Matriz* startTrack = nullptr;
    Nodo_Matriz* tmp = nullptr;
    int i = 0;
    for (i; i<x; i++)
    {
        tmp = crearLista();

        if(onTop != nullptr)
        {
            for (int j = 0; j<y; j++)
            {
               tmp->setX(i);
               onTop->setBottom(tmp);
               onTop->setDiagBottomleft(tmp->getLeft());
               onTop->setDiagBottomRight(tmp->getRight());

               tmp->setTop(onTop);
               tmp->setDiagTopleft(onTop->getLeft());
               tmp->setDiagTopRight(onTop->getRight());

               onTop = onTop->getRight();
               tmp = tmp->getRight();
            }
            if (i != (x-1))
            {
                startTrack = startTrack->getBottom();
                onTop = startTrack;
            }

        }else
        {
            start = startTrack = onTop = tmp;
        }
    }

}

Nodo_Matriz* Matriz::crearLista()
{
    Nodo_Matriz* startTrack = nullptr;
    Nodo_Matriz* before = nullptr;
    Nodo_Matriz* tmp = nullptr;

    for (int i = 0; i<y; i++)
    {
        if(before != nullptr)
        {
            tmp = new Nodo_Matriz();
            tmp->setY(i);
            before->setRight(tmp);
            tmp->setLeft(before);
            before = tmp;

        }else
        {
            startTrack = before = new Nodo_Matriz();
        }
    }
    return startTrack;

}


void Matriz::printMatriz()
{
    Nodo_Matriz* current;
    Nodo_Matriz* startTrack;
    current = startTrack = start;
    int i = 0;

    for(i; i<x; i++)
    {
        for(int j = 0; j<y; j++)
        {
            //std::cout<< current->getX() << "," << current->getY()<< " ";
            std::cout<< current->getFlag()<< " ";
            current = current->getRight();
        }
        if (i != (x-1))
        {
        startTrack = startTrack->getBottom();
        current = startTrack;
        std::cout<< "\n";
        }else{std::cout<< "\n";}
    }
    std::cout<< "\n";
}

bool Matriz::setObstacle(int x, int y)
{
    Nodo_Matriz *current = start;

    for (int i = 0; i < x;i++) {
        current = current->getBottom();
    }
    for (int j = 0; j < y; j++) {
        current = current->getRight();
    }

    if (noBlock(current))
    {
        if(current->getFlag() != true)
        {
            current->setFlag(true);
            return true;
        }else {
            return false;
        }
    }
    return false;
}

Nodo_Matriz *Matriz::getStart()
{
    return start;
}

Nodo_Matriz *Matriz::getNodo(int x, int y)
{
    Nodo_Matriz *current = start;
    for (int i = 0; i < x;i++) {
        current = current->getBottom();
    }
    for (int j = 0; j < y; j++) {
        current = current->getRight();
    }
    return current;
}

bool Matriz::noBlock(Nodo_Matriz *nodo)
{
    Nodo_Matriz* start = this->start;
    Nodo_Matriz* end = this->getNodo(x-1, y-1);

    if(nodo == start || nodo == end) return false;
    else if ((nodo == start->getBottom() && start->getRight()->getFlag() == true)
             || (nodo == start->getRight() && start->getBottom()->getFlag() == true) ) return false;
    else if ((nodo == end->getTop() && end->getLeft()->getFlag() == true)
             || (nodo == end->getLeft() && end->getTop()->getFlag() == true) ) return false;
    else return true;
}
