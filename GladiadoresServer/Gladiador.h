//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_GLADIADOR_H
#define GLADIADORESSERVER_GLADIADOR_H

#include <iostream>
#include <random>
#include <string>
#include <bits/stdc++.h>
class Gladiador {
public:
    Gladiador(std::string nm);
    Gladiador(std::string nm, std::string gen);
    std::string display();

    int atributos;
    int resistencia;

    std::string unTag;
    int  atributo[5];
    std::string retCli();
    void fillSPECIAL();
    std::string txt[5]={"edad","condicion fisica","fuerza tronco superior","fuerza tronco inferior","condicion emocional"};
    float calcFitn();
};


#endif //GLADIADORESSERVER_GLADIADOR_H
