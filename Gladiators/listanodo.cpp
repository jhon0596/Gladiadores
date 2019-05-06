#include "listanodo.h"

ListaNodo::ListaNodo()
{
    next = before = nullptr;
}

int ListaNodo::getX() const
{
    return x;
}

void ListaNodo::setX(int value)
{
    x = value;
}

int ListaNodo::getY() const
{
    return y;
}

void ListaNodo::setY(int value)
{
    y = value;
}

ListaNodo *ListaNodo::getNext() const
{
    return next;
}

void ListaNodo::setNext(ListaNodo *value)
{
    next = value;
}

ListaNodo *ListaNodo::getBefore() const
{
    return before;
}

void ListaNodo::setBefore(ListaNodo *value)
{
    before = value;
}

