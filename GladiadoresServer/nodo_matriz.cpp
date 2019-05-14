//
// Created by gacova on 14/05/19.
//

#include "nodo_matriz.h"
Nodo_Matriz::Nodo_Matriz()
{
    x = y =0;
    top = bottom = right = left = nullptr;
    diagTopleft = diagTopRight = diagBottomleft = diagBottomRight = nullptr;
    flag = false;
}

Nodo_Matriz *Nodo_Matriz::getDiagTopleft()
{
    return diagTopleft;
}

void Nodo_Matriz::setDiagTopleft(Nodo_Matriz *value)
{
    diagTopleft = value;
}

Nodo_Matriz *Nodo_Matriz::getDiagTopRight()
{
    return diagTopRight;
}

void Nodo_Matriz::setDiagTopRight(Nodo_Matriz *value)
{
    diagTopRight = value;
}

Nodo_Matriz *Nodo_Matriz::getDiagBottomleft()
{
    return diagBottomleft;
}

void Nodo_Matriz::setDiagBottomleft(Nodo_Matriz *value)
{
    diagBottomleft = value;
}

Nodo_Matriz *Nodo_Matriz::getDiagBottomRight()
{
    return diagBottomRight;
}

void Nodo_Matriz::setDiagBottomRight(Nodo_Matriz *value)
{
    diagBottomRight = value;
}

int Nodo_Matriz::getX()
{
    return x;
}

void Nodo_Matriz::setX(int value)
{
    x = value;
}

int Nodo_Matriz::getY()
{
    return y;
}

void Nodo_Matriz::setY(int value)
{
    y = value;
}

bool Nodo_Matriz::getFlag()
{
    return flag;
}

Nodo_Matriz* Nodo_Matriz::getTop()
{
    return top;
}

Nodo_Matriz* Nodo_Matriz::getBottom()
{
    return bottom;
}

Nodo_Matriz* Nodo_Matriz::getRight()
{
    return right;

}

Nodo_Matriz* Nodo_Matriz::getLeft()
{
    return left;
}


void Nodo_Matriz::setFlag(bool value)
{
    flag = value;
}

void Nodo_Matriz::setTop(Nodo_Matriz* nodo)
{
    top = nodo;
}

void Nodo_Matriz::setBottom(Nodo_Matriz* nodo)
{
    bottom = nodo;
}

void Nodo_Matriz::setRight(Nodo_Matriz* nodo)
{
    right = nodo;
}

void Nodo_Matriz::setLeft(Nodo_Matriz* nodo)
{
    left = nodo;
}