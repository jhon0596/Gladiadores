#include "backtrack.h"

BackTrack::BackTrack()
{

}

bool BackTrack::findPath(Matriz* matriz, int x, int y, int i, int j)
{
    std::cout<< "Entre al find Path \n \n";
    Nodo_Matriz* start = matriz->getNodo(x,y);
    Nodo_Matriz* end = matriz->getNodo(i-1,j-1);
    std::cout<< "Voy a solucion \n \n";
    std::cout<< start->getX()<< ", "<< start->getY()<< std::endl;
    std::cout<< end->getX()<< ", "<< end->getY()<< std::endl;

    return isSolution(start,end);
}

bool BackTrack::isSolution(Nodo_Matriz* start, Nodo_Matriz* end)
{
    if (start != nullptr)
    {
        if(!visitados.find(start->getX(),start->getY()))
        {
            if (start == end)
            {
                std::cout<< "Encontre la solucion \n";
                visitados.enqueue(start->getX(),start->getY());
                solucion.enqueue(start->getX(),start->getY());
                return true;
            }
            else if (!start->getFlag())
            {
                visitados.enqueue(start->getX(),start->getY());
                solucion.enqueue(start->getX(),start->getY());

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

                solucion.dequeue();

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

void BackTrack::printSol()
{

    std::cout<< "Solucion: ";
    solucion.printMe();
}

void BackTrack::printVis()
{

    std::cout<< "Visitados: ";
    visitados.printMe();
}
