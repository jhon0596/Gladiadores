//
// Created by gacova on 29/04/19.
//

#include "Simulacion.h"

Simulacion::Simulacion() {
    crearGladiadores();
    crearTorres();
}

void Simulacion::crearGladiadores() {
    Gladiador g1 =Gladiador("hgh");
    this->glad=g1.display();

}

void Simulacion::crearTorres() {
    Torre t1 = Torre();
    this->torre=t1.retClin();

}

const std::string &Simulacion::getGlad() const {
    return glad;
}

const std::string &Simulacion::getTorre() const {
    return torre;
}
