//
// Created by gacova on 14/05/19.
//

#include "ListaTorres.h"
#include "node.h"


void ListaTorres::add(Torre i) {
    node *temp=new node();
    temp->setTorre(i);
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

void ListaTorres::deleteF() {
    node *temp;
    temp=head;
    head=head->getNext();
    delete temp;
    size--;
}

int ListaTorres::getSize() const {
    return size;
}

void ListaTorres::setSize(int size) {
    ListaTorres::size = size;
}

ListaTorres::ListaTorres() {
    head= nullptr;
    tail = nullptr;
    size=0;
}
