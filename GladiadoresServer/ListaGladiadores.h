//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_LISTAGLADIADORES_H
#define GLADIADORESSERVER_LISTAGLADIADORES_H
#include "NodoGladiador.h"


class ListaGladiadores {
public:
    ListaGladiadores();
    void add(Gladiador* i);
    void deleteF();
    void deleteL();
    int getSize() const;
    void setSize(int size);
    NodoGladiador* head,*tail;

    virtual ~ListaGladiadores();

private:
    int size;

};


#endif //GLADIADORESSERVER_LISTAGLADIADORES_H
