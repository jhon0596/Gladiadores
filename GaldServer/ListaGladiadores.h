//
// Created by manu5535 on 5/9/19.
//

#ifndef GALDSERVER_LISTAGLADIADORES_H
#define GALDSERVER_LISTAGLADIADORES_H


#include "NodoGladiador.h"

class ListaGladiadores {
public:
    ListaGladiadores();

    void add(Gladiador i);
    void deleteF();
    NodoGladiador* head,tail;
private:
    int size;
public:
    int getSize() const;
    void setSize(int size);

};


#endif //GALDSERVER_LISTAGLADIADORES_H
