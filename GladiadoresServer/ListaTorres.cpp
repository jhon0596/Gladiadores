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

Torre ListaTorres::buscartorre(int x, int y){
    int pos = x*10 + (y + 1);
    node *temp = head;
    for(int i = 0; i < size;i++){
        if(head->gettorre().getPos() == pos){
            return head->gettorre();
        }
        temp = temp->getNext();
    }

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
