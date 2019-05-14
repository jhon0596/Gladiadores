//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_LISTA_H
#define GLADIADORESSERVER_LISTA_H
#include <iostream>
#include <stdlib.h>
#include "listanodo.h"



class Lista {
private:
    listanodo* head;
    listanodo* tail;

public:
    Lista();
    /**
     * @brief enqueue inserta al final de la lista
     * @param x
     * @param y
     */
    void enqueue(int x, int y);
    /**
     * @brief dequeue elimina el ultimo nodo agregado
     */
    void dequeue();
    /**
     * @brief find busca si un valor de x,y esta en la lista
     * @param x
     * @param y
     * @return bool, true si encuentra el valor, false si no
     */
    bool find(int x, int y);

    //Getters and setters basicos
    listanodo* getHead();
    void setHead(listanodo &value);
    listanodo* getTail();
    void setTail(listanodo &value);
    /**
     * @brief printMe imporime en consola los elementos de la lista
     */
    void printMe();
    /**
     * @brief cleanMe libera los datos de la lista.
     */
    void cleanMe();
};


#endif //GLADIADORESSERVER_LISTA_H
