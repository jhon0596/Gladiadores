#ifndef LISTAMOVIMIENTO_H
#define LISTAMOVIMIENTO_H

#include "nodomovimiento.h"

class listamovimiento
{
public:
    listamovimiento();
    nodomovimiento* head;
    nodomovimiento* tail;
    int size;
    void addinicio(int n);
    void deleteF();
};

#endif // LISTAMOVIMIENTO_H
