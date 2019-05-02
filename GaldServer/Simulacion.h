//
// Created by gacova on 29/04/19.
//

#ifndef GALDSERVER_SIMULACION_H
#define GALDSERVER_SIMULACION_H

#include "Gladiador.h"
#include "Torre.h"



class Simulacion {
public:
    Simulacion();
    void  crearTorres();
    void crearGladiadores();
    const std::string &getGlad() const;

    const std::string &getTorre() const;
private:
    std::string glad,torre;
};


#endif //GALDSERVER_SIMULACION_H
