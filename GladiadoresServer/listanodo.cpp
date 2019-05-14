//
// Created by gacova on 14/05/19.
//

#include "listanodo.h"
listanodo::listanodo()
{
    next = before = nullptr;
}

int listanodo::getX() const
{
    return x;
}

void listanodo::setX(int value)
{
    x = value;
}

int listanodo::getY() const
{
    return y;
}

void listanodo::setY(int value)
{
    y = value;
}

listanodo *listanodo::getNext() const
{
    return next;
}

void listanodo::setNext(listanodo *value)
{
    next = value;
}

listanodo *listanodo::getBefore() const
{
    return before;
}

void listanodo::setBefore(listanodo *value)
{
    before = value;
}
