//
// Created by gacova on 14/05/19.
//

#include "Simulacion.h"

Matriz mat =Matriz(10,10);
int tag=0;
Simulacion::Simulacion() {

}

void Simulacion::crearGladiadores() {
    for(int i=0;i<20;i++){
        Gladiador *g1=new Gladiador("glad"+std::to_string(tag));
        tag++;
        back->add(g1);
    }

    for(int i=0;i<20;i++){
        Gladiador *g1=new Gladiador("glad"+std::to_string(tag));
        tag++;
        AStar->add(g1);
    }
    vida.bubbleSort(back);
    vida.bubbleSort(AStar);




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
    bool LFlag=true;
    Gladiador *disGl;
    for(int i =0;i<2;i++){
        if(LFlag){
            disGl = AStar->head->getgladiador();
            disGl->display();
            LFlag=false;
        }
        else{
            disGl = back->head->getgladiador();
            disGl->display();
        }

        Gald.put("id","LG");

        boost::property_tree::ptree  & node= Gald.add("lista.gladiador","");
        node.put("tag",disGl->unTag);
        node.put("e",disGl->atributo[4]);
        node.put("conf",disGl->atributo[3]);
        node.put("trsup",disGl->atributo[2]);
        node.put("trinf",disGl->atributo[1]);
        node.put("emoji",disGl->atributo[0]);




    }



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

void Simulacion::gladiadoresGeneraciones() {
vida.cruzarPoblacion(back);
vida.cruzarPoblacion(AStar);
}
