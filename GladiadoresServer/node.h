//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_NODE_H
#define GLADIADORESSERVER_NODE_H

#include "Torre.h"
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


#endif //GLADIADORESSERVER_NODE_H
