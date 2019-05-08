//
// Created by gacova on 26/04/19.
//

#ifndef GALDSERVER_UTILITIES_H
#define GALDSERVER_UTILITIES_H

#include <stdlib.h>
#include <time.h>
#include <random>
#include <iostream>
class Utilities {
public:

/**

     *@brief  metodo aleatorio para numeros enteros
     * @param min rango minimo
     * @param max rango maximo
     * @return un entero aleatorio entre los parametros
     * */
    static int random(int min, int max);
    /**

     *@brief  metodo aleatorio para numeros flotantes
     * @param min rango minimo
     * @param max rango maximo
     * @return un flotante aleatorio entre los parametros
     * */
    static float random(float min, float max);
    /**

     *@brief  metodo aleatorio alternativo para numeros enteros
     * @param min rango minimo
     * @param max rango maximo
     * @return un enteros aleatorio entre los parametros
     * */
    static int randoms(int min, int max);
};


#endif //GALDSERVER_UTILITIES_H