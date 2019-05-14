//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_TORRE_H
#define GLADIADORESSERVER_TORRE_H

#include "Utilities.h"
#include <string>

class Torre {
    public:
            Torre();
    void  setTorre();
    std::string retClin();

private:
    int dano,pos,idTor,alcance;
public:
    void setPos();

public:
    int getPos() const;

    const std::string &getTipo() const;

private:
    std::string tipo ;
};


#endif //GLADIADORESSERVER_TORRE_H
