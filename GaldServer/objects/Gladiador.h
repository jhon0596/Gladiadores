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
    Gladiador(std::string nm);
    std::string display();

    int atributos;

private:


    std::string unTag;

    std::string retCli();

    void fillSPECIAL();
    std::string txt[5]={"edad","condicion fisica","fuerza tronco superior","fuerza tronco inferior","condicion emocional"};
    float calcFitn();
};


#endif //GALDSERVER_GLADIADOR_H
