//
// Created by manu5535 on 5/9/19.
//

#ifndef GALDSERVER_NODOGLADIADOR_H
#define GALDSERVER_NODOGLADIADOR_H

#include "Gladiador.h"

class NodoGladiador {
public:


    NodoGladiador();
    NodoGladiador *getNext() const;
    void setgladiador(Gladiador glad);
    void setNext(NodoGladiador* pun);
    Gladiador getgladiador() const;
private:
    Gladiador gladiador;
    NodoGladiador *next;


};


#endif //GALDSERVER_NODOGLADIADOR_H
