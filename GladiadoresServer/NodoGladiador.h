//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_NODOGLADIADOR_H
#define GLADIADORESSERVER_NODOGLADIADOR_H

#include "Gladiador.h"
class NodoGladiador {
public:
    NodoGladiador();
    NodoGladiador *getNext() const;
    void setgladiador(Gladiador* glad);
    void setNext(NodoGladiador* pun);
    Gladiador* getgladiador() const;
private:
    Gladiador* gladiador;
    NodoGladiador *next;
};


#endif //GLADIADORESSERVER_NODOGLADIADOR_H
