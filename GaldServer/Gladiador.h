//
// Created by gacova on 15/04/19.
//

#ifndef GALDSERVER_GLADIADOR_H
#define GALDSERVER_GLADIADOR_H

#include <iostream>
#include <random>
#include <string>
#include <bits/stdc++.h>

class Gladiador {
public:
    /**
     *@brief  constructor del gladiador
     * @param nm identificador unico
     * */
    Gladiador(std::string nm);
    /**
     *@brief  metodo para mostrar los atributos
     * */
    std::string display();
    /**
     *@brief  entero donde se guarda todos los atributos de binaria a decimal
     * */
    int atributos;

private:

    /**
     *@brief  string de identificador unico
     * */
    std::string unTag;
    /**
     *@brief  string de salida de datos
     * */
    std::string retCli();
    /**
     *@brief  metodo donde se genera  los atributos del gladiador
     * */
    void fillSPECIAL();
    /**
     *@brief  arreglo de string para la salida de datos
     * */
    std::string txt[5]={"edad","condicion fisica","fuerza tronco superior","fuerza tronco inferior","condicion emocional"};
    /**
     *@brief float que calcula el fitnness del gladidor
     * */
    float calcFitn();
};


#endif //GALDSERVER_GLADIADOR_H
