//
// Created by gacova on 29/04/19.
//

#include "Simulacion.h"

Simulacion::Simulacion() {

}

void Simulacion::crearGladiadores() {
    Gladiador g1 =Gladiador("hgh");
    this->gladiar=g1.display();

}

void Simulacion::crearTorres() {

    for (int i=0;i<3;i++){
        Torre t1 = Torre();
        int ps =t1.getPos()-1;
        bool flag = true;
        while (flag){
            if(mat.setObstacle(ps/10,ps%10)){
                lt.add(t1);
                flag= false;

            }
            else{
                t1.setPos();
                ps =t1.getPos()-1;
            }

        }





    }



}

 std::string &Simulacion::getGlad()  {

     boost::property_tree::ptree Gald;
    Gald.put("id","LG");
    boost::property_tree::ptree  & node= Gald.add("lista.gladiador","");
    node.put("e",18);
    node.put("conf",25);
    node.put("trsup",18);
    node.put("trinf",25);
    node.put("emoji",25);


    std::ostringstream buf;
    boost::property_tree::write_xml(buf, Gald, false);
     gladiar=buf.str();

     std::cout <<gladiar<<std::endl;

    return gladiar;
}

 std::string &Simulacion::getTorre()  {
     boost::property_tree::ptree torres;
    torres.put("id","LT");
        node *tmp=lt.head;
    for (int i=0;i<lt.getSize();i++){


        boost::property_tree::ptree  & node= torres.add("lista.Torre","");
        node.put("t",tmp->gettorre().getTipo());
        node.put("p",tmp->gettorre().getPos());
        tmp=tmp->getNext();

    }

     std::ostringstream buf;
    boost::property_tree::write_xml(buf, torres, false);
     torre=buf.str();
     std::cout <<torre<<std::endl;
    return torre;
}
