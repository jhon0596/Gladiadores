//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_ASTAR_H
#define GLADIADORESSERVER_ASTAR_H

#include <iostream>
#include <math.h>

#include "Lista.h"
#include "matriz.h"
class AStar {
private:
    float distanciaDiag;
    float distanciaHor;
    Lista *closed;
    Lista *open;
    Lista *solucion;
    Matriz* matriz;

public:
    AStar();
    /**
     * @brief findPath crea las variables necesarias para poder iniciar la
     *        busqueda del camino y si hay uno devuelve un true
     * @param matriz
     * @param x
     * @param y
     * @param i
     * @param j
     * @return
     */
    bool findPath(Matriz* matriz, int x, int y, int i, int j);
    /**
     * @brief isSolution verifica si hay un path hasta el nodo deseado, si lo hay
     *        se construye la solucion
     * @param start
     * @param end
     * @return bool
     */
    bool isSolution(Nodo_Matriz* start, Nodo_Matriz* end);
    /**
     * @brief printSol impirme en consola los nodos que componen la solucion
     */
    void printSol();
    /**
     * @brief printClosed impirme en consola los nodos que componen la closed list
     */
    void printClosed();
    /**
     * @brief printOpen impirme en consola los nodos que componen la open list
     */
    void printOpen();
    /**
     * @brief clean libera los datos de las listas utilizadas y limpia los nodos a valores base
     */
    void clean();
    /**
     * @brief addToOpen valida si el nodo evaluado es apto para agregar a la lista open,
     *        y/o hace update del parent si el camino es mas corti
     * @param current
     * @param neighbour
     * @param distancia
     * @param end
     */
    void addToOpen(Nodo_Matriz* current, Nodo_Matriz *neighbour, float distancia, Nodo_Matriz *end);

    Lista* getSolucion();

};


#endif //GLADIADORESSERVER_ASTAR_H
