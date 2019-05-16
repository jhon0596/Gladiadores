//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_SIMULACION_H
#define GLADIADORESSERVER_SIMULACION_H
#include <string>
#include <vector>
#include <functional>
#include <iostream>
#include "Gladiador.h"
#include "Torre.h"
#include "boost/property_tree/ptree.hpp"
#include "ListaTorres.h"
#include "boost/property_tree/xml_parser.hpp"
#include "matriz.h"
#include "ListaGladiadores.h"
#include "AlgoritmoGenetico.h"
#include "backtrack.h"
#include "AStar.h"
#include "nodo_matriz.h"

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
    void crearCaminoBackTrack();
    void crearCaminoAstar();


private:
    backtrack bac;
    AStar ast;
    AlgoritmoGenetico vida =AlgoritmoGenetico();
    ListaGladiadores* back = new ListaGladiadores();
    ListaGladiadores * astar = new ListaGladiadores();
    std::string torre,gladiar,backtra,aestre;
    Lista* danoBack(Gladiador* gladiador, Lista* lista, ListaTorres listaT);
    Lista* danoAStar(Gladiador* gladiador, Lista* lista, ListaTorres listaT);
    void danoAux1(Nodo_Matriz* nodo, Gladiador* gladiador, ListaTorres listaT);
    void danoAux2(Nodo_Matriz* nodo, Gladiador* gladiador, ListaTorres listaT);
public:
    std::string &getBack() ;
    std::vector<std::string> backt;
     std::string &getAst() ;
};


#endif //GLADIADORESSERVER_SIMULACION_H
