#ifndef LISTANODOS_H
#define LISTANODOS_H

#include <iostream>
#include <stdlib.h>
#include "listanodo.h"

class Lista
{
private:
    ListaNodo* head;
    ListaNodo* tail;

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
    ListaNodo* getHead();
    void setHead(ListaNodo &value);
    ListaNodo* getTail();
    void setTail(ListaNodo &value);
    /**
     * @brief printMe imporime en consola los elementos de la lista
     */
    void printMe();
    /**
     * @brief cleanMe libera los datos de la lista.
     */
    void cleanMe();
};

#endif // LISTANODOS_H
