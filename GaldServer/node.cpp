//
// Created by gacova on 03/05/19.
//

#include "node.h"



node *node::getNext() const {
    return next;
}

void node::setNext(node *pun) {
    this->next=pun;
}

void node::setTorre(Torre torre) {
    this->torre=torre;
}

Torre node::gettorre() const {
    return Torre();
}

node::node() {}
