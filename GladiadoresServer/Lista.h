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
    void enqueue(Nodo_Matriz *nodo);
    /**
     * @brief dequeue elimina el primer nodo agregado
     */
    void dequeue();
    /**
     * @brief find busca si un valor de x,y esta en la lista
     * @param x
     * @param y
     * @return bool, true si encuentra el valor, false si no
     */
    bool find(Nodo_Matriz *nodo);

    //Getters and setters basicos
    listanodo* getHead();
    void setHead(listanodo *value);
    listanodo* getTail();
    void setTail(listanodo *value);
    /**
     * @brief printMe imporime en consola los elementos de la lista
     */
    void printMe();
    /**
     * @brief cleanMe libera los datos de la lista.
     */
    void cleanMe();
    /**
     * @brief pop elimina el ultimo nodo agregado
     */
    void pop();
    /**
     * @brief sort ordena la lista de menor a mayor valor de F
     */
    void sort();
    /**
     * @brief swap intercambia valores entre 2 nodos
     * @param listanodo* nodo1
     * @param listanodo* nodo2
     */
    void swap(listanodo* nodo1, listanodo* nodo2);
    /**
     * @brief size devuelve cuantos elementos tiene la lista
     * @return int
     */
    int size();
};


#endif //GLADIADORESSERVER_LISTA_H
