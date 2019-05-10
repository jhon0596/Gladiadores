#ifndef BACKTRACK_H
#define BACKTRACK_H

#include <iostream>

#include "matriz.h"
#include "nodo_matriz.h"
#include "lista.h"


class BackTrack
{
private:
    Lista solucion;
    Lista visitados;

public:
    BackTrack();
    /**
     * @brief findPath crea las variables necesarias para poder iniciar la
     *        busqueda del camino y si hay uno devuelve un true
     * @param matriz
     * @param x
     * @param y
     * @param i
     * @param j
     * @return bool
     */
    bool findPath(Matriz* matriz, int x, int y, int i, int j);
    /**
     * @brief isSolution verifica si hay un path hasta el nodo deseado, si lo hay
     *        se construye la solucion
     * @param start
     * @param end
     * @return bool
     */
    bool isSolution (Nodo_Matriz* start, Nodo_Matriz* end);
    /**
     * @brief printSol imprime en consola todos los nodos que componen la solucion de la matriz
     */
    void printSol();
    /**
     * @brief printVis imprime en consola todos los nodos que han sido visitados
     */
    void printVis();
};

#endif // BACKTRACK_H
