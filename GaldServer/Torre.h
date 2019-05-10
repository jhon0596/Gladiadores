//
// Created by gacova on 29/04/19.
//

#ifndef GALDSERVER_TORRE_H
#define GALDSERVER_TORRE_H

#include "Utilities.h"
#include <string>

class Torre {
public:
    /**
     *@brief  constructor de torre
     * */
    Torre();
    /**
     *@brief  metodo que modifica los atributos de la torre dependiendo idTor
     * */
    void  setTorre();
    /**
     *@brief  string de salida de datos
     * */
    std::string retClin();
    /**
     *@brief  obtiene la posicion el la matriz
     * */
    int getPos() const;
    /**
     *@brief  obtiene el tipo de torre
     * */
    const std::string &getTipo() const;

private:
    /**
     *@brief  enteros de daño, posicion, id de la torre, alcance
     * */
    int dano,pos,idTor,alcance;
    /**
     *@brief  string tipo
     * */
    std::string tipo ;


};


#endif //GALDSERVER_TORRE_H
