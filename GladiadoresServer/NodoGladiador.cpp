//
// Created by gacova on 14/05/19.
//

#include "NodoGladiador.h"
NodoGladiador *NodoGladiador::getNext() const {
    return next;
}

void NodoGladiador::setNext(NodoGladiador *pun) {
    this->next=pun;
}

void NodoGladiador::setgladiador(Gladiador* glad) {
    this->gladiador=glad;
}

Gladiador* NodoGladiador::getgladiador() const {
    return this->gladiador;
}

NodoGladiador::NodoGladiador() {}