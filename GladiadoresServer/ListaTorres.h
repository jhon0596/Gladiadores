//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_LISTATORRES_H
#define GLADIADORESSERVER_LISTATORRES_H


#include "node.h"

class ListaTorres {
public:
    ListaTorres();

    void add(Torre i);
    void deleteF();
    node* head,*tail;
    int getSize() const;
    void setSize(int size);
    Torre buscartorre(int x, int y);
private:
    int size;


};


#endif //GLADIADORESSERVER_LISTATORRES_H
