#ifndef LISTAASTAR_H
#define LISTAASTAR_H

#include "nodoastar.h"

class ListaAStar
{
private:
    NodoAStar* head;
    NodoAStar* tail;
public:
    ListaAStar();
    void addNodo();
    bool isClosed();
};

#endif // LISTAASTAR_H
