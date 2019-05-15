//
// Created by gacova on 14/05/19.
//

#include "backtrack.h"
backtrack::backtrack()
{
    solucion = new Lista();
    visitados = new Lista();
}

bool backtrack::findPath(Matriz* matriz, int x, int y, int i, int j)
{
    clean();
    //std::cout<< "Inicio find Path \n \n";
    Nodo_Matriz* start = matriz->getNodo(x,y);
    Nodo_Matriz* end = matriz->getNodo(i-1,j-1);
    std::cout<< "Buscando si hay solucion \n \n";
    std::cout<< start->getX()<< ", "<< start->getY()<< std::endl;
    std::cout<< end->getX()<< ", "<< end->getY()<< std::endl;

    return isSolution(start,end);
}

bool backtrack::isSolution(Nodo_Matriz* start, Nodo_Matriz* end)
{
    if (start != nullptr)                    //Si ni es un nullpointer y no esta en la lista de
    {                                        //visitados se procede a buscar los caminos
        if(!visitados->find(start))
        {
            if (start == end)
            {
                std::cout<< "Encontre la solucion \n";
                visitados->enqueue(start);
                solucion->enqueue(start);
                return true;
            }
            else if (!start->getFlag())
            {
                visitados->enqueue(start);
                solucion->enqueue(start);

                if (isSolution(start->getRight(), end))
                {
                    std::cout<< "Derecha \n \n";

                    return true;
                }
                else if (isSolution(start->getBottom(), end))
                {
                    std::cout<< "Abajo \n \n";

                    return true;
                }
                else if (isSolution(start->getLeft(), end))
                {
                    std::cout<< "Izquierda \n \n";

                    return true;
                }
                else if (isSolution(start->getTop(), end))
                {
                    std::cout<< "Arriba \n \n";

                    return true;
                }
                /*
                else if (isSolution(start->getDiagBottomRight(), end))
                {
                    std::cout<< "Diagonal Inferior Derecha \n \n";
                    return true;
                }
                else if (isSolution(start->getDiagBottomleft(), end))
                {
                    std::cout<< "Diagonal Inferior Izquierda \n \n";
                    return true;
                }
                else if (isSolution(start->getDiagTopRight(), end))
                {
                    std::cout<< "Diagonal Superior Derecha\n \n";
                    return true;
                }
                else if (isSolution(start->getDiagTopleft(), end))
                {
                    std::cout<< "Diagonal Superior Izquierda\n \n";
                    return true;
                }
                */

                solucion->pop();

                return false;
            }
            std::cout<< "Obstaculo \n \n";
            return false;
        }
        std::cout<< "Ya lo habia visitado \n \n";
        return false;
    }
    std::cout<< "Era un NullPointer \n \n";
    return false;
}

void backtrack::printSol()
{

    std::cout<< "Solucion: ";
    solucion->printMe();
}

void backtrack::printVis()
{

    std::cout<< "Visitados: ";
    visitados->printMe();
}

void backtrack::clean()
{
    visitados->cleanMe();
    solucion->cleanMe();
}

Lista *backtrack::getSolucion()
{
    return solucion;
}
