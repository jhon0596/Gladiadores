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
            std::cout<< current->getX() << "," << current->getY()<< " ";
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
