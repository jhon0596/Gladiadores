//
// Created by gacova on 03/05/19.
//

#ifndef GALDSERVER_LISTATORRES_H
#define GALDSERVER_LISTATORRES_H


#include "node.h"

class ListaTorres {
public:
    ListaTorres();

    void add(Torre i);
    void deleteF();
    node* head,*tail;
private:
    int size;
public:
    int getSize() const;

    void setSize(int size);

};


#endif //GALDSERVER_LISTATORRES_H
