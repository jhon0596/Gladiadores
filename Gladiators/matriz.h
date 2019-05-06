#ifndef MATRIZ_H
#define MATRIZ_H

#include "nodo_matriz.h"
#include <string>
#include <iostream>
/**
 * @brief The Matriz class es una matriz de tama_o variable, segun el input
 */
class Matriz
{
private:
    int x;
    int y;
    Nodo_Matriz* start;
    /**
     * @brief crear, construye la matriz
     */
    void crear();
    /**
     * @brief crearLista es una lista doblemente en lazada para crear las filas de la matriz
     * @return una direccion Nodo_Matriz
     */
    Nodo_Matriz* crearLista();

public:
    /**
     * @brief Constructor de Matriz
     * @param int i
     * @param int j
     */
    Matriz(int i, int j);
    /**
     * @brief addMatriz a_ade a la matriz en una posicion especifica una letra
     * @param letter string
     * @param x int posicion x
     * @param y int posicion y
     */
    void printMatriz();
    /**
     * @brief set setea un nodo como obstaculo
     * @param int x
     * @param int y
     */
    void setObstacle(int x, int y);
    /**
     * @brief getStart, devuelve el nodo 0,0 de la matriz
     * @return Nodo_Matriz*
     */
    Nodo_Matriz* getStart();
    /**
     * @brief getNodo devuelve el nodo en la posicion x,y especificada
     * @param x
     * @param y
     * @return Nodo_Matriz*
     */
    Nodo_Matriz* getNodo(int x, int y);
};

#endif // MATRIZ_H
