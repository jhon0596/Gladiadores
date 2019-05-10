//
// Created by gacova on 29/04/19.
//

#include "Torre.h"

std::string Torre::retClin() {

    return this->tipo+"," +std::to_string(this->pos);
}

Torre::Torre() {
    this->idTor= Utilities::random(1,3);
    this->setTorre();
    this->pos=Utilities::random(1,100);

}

void Torre::setTorre() {

    switch(this->idTor){
        case 1:
            this->tipo="1";
            this->dano=1;
            this->alcance=1;
            break;
        case 2:
            this->tipo="2";
            this->dano=2;
            this->alcance=2;
            break;
        case 3:
            this->tipo="3";
            this->dano=4;
            this->alcance=2;
            break;


    }


}

int Torre::getPos() const {
    return pos;
}

const std::string &Torre::getTipo() const {
    return tipo;
}

void Torre::setPos() {


    this->pos = Utilities::random(1,100);
}
