//
// Created by gacova on 03/05/19.
//

#ifndef GALDSERVER_LISTATORRES_H
#define GALDSERVER_LISTATORRES_H


#include "node.h"

class ListaTorres {
public:
    /**
     *@brief  constructor de lista de torre
     * */
    ListaTorres();
    /**
     *@brief  metodo que agrega al final las nuvas torres
     * @param i torre recien creada
     * */
    void add(Torre i);
    /**
     *@brief  metodo que elemina al principio las nuvas torres
     * */
    void deleteF();
    /**
     *@brief  nodos de la cabeza y cola
     * */
    node* head,*tail;
    /**
     *@brief  obtine el tamaño de la lista
     * */
    int getSize() const;
/**
     *@brief modifica el tamaño de lista
     * */
    void setSize(int size);

private:
    /**
     *@brief cantidad de elementos en la lista
     * */
    int size;



};


#endif //GALDSERVER_LISTATORRES_H
