//
// Created by gacova on 29/04/19.
//

#ifndef GALDSERVER_TORRE_H
#define GALDSERVER_TORRE_H

#include "Utilities.h"
#include <string>

class Torre {
public:
    Torre();
    void  setTorre();
    std::string retClin();

private:
    int dano,pos,idTor,alcance;
    std::string tipo ;


};


#endif //GALDSERVER_TORRE_H
