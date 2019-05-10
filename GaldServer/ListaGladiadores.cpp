//
// Created by manu5535 on 5/9/19.
//

#include "ListaGladiadores.h"

ListaGladiadores::ListaGladiadores() {

}

void ListaGladiadores::add(Gladiador i) {
    NodoGladiador *temp=new NodoGladiador();
    temp->setgladiador(i);
    temp->setNext(nullptr);
    if(head == nullptr)
    {
        head=temp;
        tail=temp;

        temp= nullptr;
    }
    else
    {
        tail->setNext(temp);
        tail =temp;

    }
    size++;

}

void ListaGladiadores::deleteF() {
    NodoGladiador *temp;
    temp=head;
    head=head->getNext();
    delete temp;
    size--;
}

int ListaGladiadores::getSize() const {
    return size;
}

void ListaGladiadores::setSize(int size) {
    ListaGladiadores::size = size;
}

ListaGladiadores::ListaTorres() {
    head= nullptr;
    tail = nullptr;
    size=0;
}

