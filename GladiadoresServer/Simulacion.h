//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_SIMULACION_H
#define GLADIADORESSERVER_SIMULACION_H
#include "Gladiador.h"
#include "Torre.h"
#include "boost/property_tree/ptree.hpp"
#include "ListaTorres.h"
#include "boost/property_tree/xml_parser.hpp"
#include "matriz.h"
#include "ListaGladiadores.h"
#include "AlgoritmoGenetico.h"


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
    *@brief  metodo para retornar las torres formato xml

    * */
    std::string &getTorre() ;
    /**
    *@brief  metodo para generar los nuevos gladiadores

    * */
    void gladiadoresGeneraciones();
private:
    AlgoritmoGenetico vida =AlgoritmoGenetico();
    ListaGladiadores* back = new ListaGladiadores();
    ListaGladiadores* AStar = new ListaGladiadores();
    std::string torre,gladiar;
};


#endif //GLADIADORESSERVER_SIMULACION_H
