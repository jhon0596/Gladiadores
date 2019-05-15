//
// Created by gacova on 14/05/19.
//

#include "listanodo.h"
Nodo_Matriz *listanodo::getData() const
{
    return data;
}

void listanodo::setData(Nodo_Matriz *value)
{
    data = value;
}

listanodo::listanodo()
{
    next = before = nullptr;
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

