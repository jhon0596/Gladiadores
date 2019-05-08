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
    /*
     boost::property_tree::ptree torres;
    torres.put("id","GL");
        node *tmp=lt.head;
    for (int i=0;i<lt.getSize();i++){
        boost::property_tree::ptree  & node= torres.add("Torre","");
        node.put("t",tmp->gettorre().getTipo());
        node.put("p",tmp->gettorre().getPos());

        tmp=tmp->getNext();

    }

     std::ostringstream buf;
    boost::property_tree::write_xml(buf, torres, false);
     torre=buf.str();
    */





    return glad;
}

 std::string &Simulacion::getTorre()  {
     boost::property_tree::ptree torres;
    torres.put("id","LT");
        node *tmp=lt.head;
    for (int i=0;i<lt.getSize();i++){


        boost::property_tree::ptree  & node= torres.add("lista.Torre","");
        node.put("t",tmp->gettorre().getTipo());
        node.put("p",tmp->gettorre().getPos());
        std::cout << tmp->gettorre().getTipo()<<std::endl;
        std::cout <<tmp->gettorre().getPos()<<std::endl;
        tmp=tmp->getNext();

    }

     std::ostringstream buf;
    boost::property_tree::write_xml(buf, torres, false);
     torre=buf.str();
     std::cout <<torre<<std::endl;
    return torre;
}
