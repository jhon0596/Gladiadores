//
// Created by gacova on 29/04/19.
//

#include "Simulacion.h"

Simulacion::Simulacion() {

}

void Simulacion::crearGladiadores() {
    Gladiador g1 =Gladiador("hgh");
    this->glad=g1.display();

}

void Simulacion::crearTorres() {

    for (int i=0;i<3;i++){
        Torre t1 = Torre();
        lt.add(t1);
    }



}

const std::string &Simulacion::getGlad() const {
    return glad;
}

 std::string &Simulacion::getTorre()  {
     boost::property_tree::ptree torres;
    torres.put("id","torres");
        node *tmp=lt.head;
    for (int i=0;i<lt.getSize();i++){
        boost::property_tree::ptree  & node= torres.add("Torres","");
        node.put("tipo",tmp->gettorre().getTipo());
        node.put("pos",tmp->gettorre().getPos());

        tmp=tmp->getNext();

    }
     std::ostringstream buf;
    boost::property_tree::write_xml(buf, torres, false);
     torre=buf.str();

    return torre;
}
