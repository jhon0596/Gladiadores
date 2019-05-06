#ifndef LISTANODOS_H
#define LISTANODOS_H

#include <iostream>
#include "listanodo.h"

class Lista
{
private:
    ListaNodo* head;
    ListaNodo* tail;

public:
    Lista();
    void enqueue(int x, int y);
    void dequeue();
    bool find(int x, int y);

    ListaNodo* getHead();
    void setHead(ListaNodo &value);
    ListaNodo* getTail();
    void setTail(ListaNodo &value);
    void printMe();
};

#endif // LISTANODOS_H
