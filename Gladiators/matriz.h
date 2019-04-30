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
};

#endif // MATRIZ_H
