//
// Created by gacova on 29/04/19.
//

#ifndef GALDSERVER_SIMULACION_H
#define GALDSERVER_SIMULACION_H

#include "objects/Gladiador.h"
#include "objects/Torre.h"
#include "boost/property_tree/ptree.hpp"
#include "dataStructure/ListaTorres.h"
#include "boost/property_tree/xml_parser.hpp"


class Simulacion {
public:
    Simulacion();
    void  crearTorres();
    void crearGladiadores();
    const std::string &getGlad() const;
    ListaTorres lt;
     std::string &getTorre() ;
private:


    std::string glad,torre;
};


#endif //GALDSERVER_SIMULACION_H
