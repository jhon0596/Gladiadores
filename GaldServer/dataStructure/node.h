//
// Created by gacova on 03/05/19.
//

#ifndef GALDSERVER_NODE_H
#define GALDSERVER_NODE_H


#include "../objects/Torre.h"

class node {

public:


    node();
    node *getNext() const;
    void setTorre(Torre torre);
    void setNext(node* pun);
    Torre gettorre() const;
private:
    Torre torre;
    node *next;



};


#endif //GALDSERVER_NODE_H
