//
// Created by gacova on 14/05/19.
//

#include "ListaGladiadores.h"
ListaGladiadores::ListaGladiadores() {
    head= nullptr;
    tail = nullptr;
    size=0;
}

void ListaGladiadores::add(Gladiador* i) {
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
void ListaGladiadores::deleteL() {
    NodoGladiador *current;
    NodoGladiador *prev;
    current=head;
    while(current->getNext()!=nullptr){
        prev = current;
        current = current->getNext();
    }

    tail = prev;
    prev->setNext(nullptr);
    size--;
    delete current;

}



int ListaGladiadores::getSize() const {
    return size;
}

void ListaGladiadores::setSize(int size) {
    ListaGladiadores::size = size;
}

ListaGladiadores::~ListaGladiadores() {
    head= nullptr;
    tail = nullptr;
    size=0;
}