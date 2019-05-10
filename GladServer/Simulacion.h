//
// Created by gacova on 29/04/19.
//

#ifndef GALDSERVER_SIMULACION_H
#define GALDSERVER_SIMULACION_H

#include "Gladiador.h"
#include "Torre.h"
#include "boost/property_tree/ptree.hpp"
#include "ListaTorres.h"
#include "boost/property_tree/xml_parser.hpp"
#include "matriz.h"


class Simulacion {
public:
    /**
    *@brief  constructor de la simulacion
     *
    * */
    Simulacion();
    /**
    *@brief metodo para crear las torres dentro de la matirz
     *
    * */
    void  crearTorres();
    /**
    *@brief  metodo para crear los gladiadores

    * */
    void crearGladiadores();
    /**
    *@brief  metodo para retornar los gladiadores formato json

    * */
     std::string &getGlad() ;
    /**
    *@brief  lista de torres en la matriz

    * */
    ListaTorres lt;
    /**
    *@brief  metodo para retornar las torres formato json

    * */
    std::string &getTorre() ;
private:
    Matriz mat =Matriz(10,10);

    std::string torre,gladiar;
};


#endif //GALDSERVER_SIMULACION_H
