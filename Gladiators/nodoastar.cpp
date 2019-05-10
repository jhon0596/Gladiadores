#include "nodoastar.h"

int NodoAStar::getX() const
{
    return x;
}

void NodoAStar::setX(int value)
{
    x = value;
}

int NodoAStar::getY() const
{
    return y;
}

void NodoAStar::setY(int value)
{
    y = value;
}

NodoAStar *NodoAStar::getParent() const
{
    return parent;
}

void NodoAStar::setParent(NodoAStar *value)
{
    parent = value;
}

int NodoAStar::getH() const
{
    return H;
}

void NodoAStar::setH(int value)
{
    H = value;
}

int NodoAStar::getF() const
{
    return F;
}

void NodoAStar::setF(int value)
{
    F = value;
}

int NodoAStar::getG() const
{
    return G;
}

void NodoAStar::setG(int value)
{
    G = value;
}

NodoAStar *NodoAStar::getBefore() const
{
    return before;
}

void NodoAStar::setBefore(NodoAStar *value)
{
    before = value;
}

NodoAStar *NodoAStar::getNext() const
{
    return next;
}

void NodoAStar::setNext(NodoAStar *value)
{
    next = value;
}

NodoAStar::NodoAStar()
{

}
