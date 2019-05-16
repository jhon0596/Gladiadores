//
// Created by gacova on 14/05/19.
//

#include "Simulacion.h"

Matriz *mat = new Matriz(10,10);
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
        astar->add(g1);
    }
    vida.bubbleSort(back);
    vida.bubbleSort(astar);




}

void Simulacion::crearTorres() {

    for (int i=0;i<3;i++){
        Torre t1 = Torre();
        int ps =t1.getPos()-1;
        bool flag = true;
        while (flag){

            if( mat->setObstacle(ps/10,ps%10)){
                lt.add(t1);
                flag= false;

            }
            else{
                t1.setPos();
                ps =t1.getPos()-1;
            }

        }

        //bac.printSol();




    }
    bac.findPath(mat,0,0,10,10);


}

std::string &Simulacion::getGlad()  {

    boost::property_tree::ptree Gald;
    bool LFlag=true;
    Gladiador *disGl;
    for(int i =0;i<2;i++){
        if(LFlag){
            disGl = astar->head->getgladiador();
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
vida.cruzarPoblacion(astar);
}

void Simulacion::crearCaminoBackTrack() {
    bac.findPath(mat,0,0,10,10);


}

void Simulacion::crearCaminoAstar() {
    ast.findPath(mat,0,0,10,10);

}

 std::string &Simulacion::getBack()  {
     boost::property_tree::ptree ba;
     //listanodo *tmp=bac.getSolucion()->getHead();

     Lista* resultado = danoBack(back->head->getgladiador(),bac.getSolucion(),lt);
     listanodo *tmp = resultado->getHead();
     ba.put("id","MB");

     for (int i=0;i<resultado->size();i++){

         boost::property_tree::ptree  & node= ba.add("lista.p",tmp->getData()->getX()*10+tmp->getData()->getY()+1);
        tmp=tmp->getNext();

     }

     std::ostringstream buf;
     boost::property_tree::write_xml(buf, ba, false);
     backtra=buf.str();
     std::cout <<backtra<<std::endl;


    return backtra;
}

 std::string &Simulacion::getAst()  {
     boost::property_tree::ptree astra;
     //listanodo *tmp=ast.getSolucion()->getHead();

     Lista* resultado = danoAStar(astar->head->getgladiador(),ast.getSolucion(),lt);
     listanodo *tmp = resultado->getHead();
     astra.put("id","MA");

     for (int i=0;i<ast.getSolucion()->size();i++){

         boost::property_tree::ptree  & node= astra.add("lista.p",tmp->getData()->getX()*10+tmp->getData()->getY()+1);
         tmp=tmp->getNext();

     }

     std::ostringstream buf;
     boost::property_tree::write_xml(buf, astra, false);
     aestre=buf.str();
     std::cout <<aestre<<std::endl;

    return aestre;
}

Lista* Simulacion::danoBack(Gladiador* gladiador, Lista* lista, ListaTorres listaT)
{
    Nodo_Matriz* nodo;
    Lista* final = new Lista();

    while (gladiador->resistencia > 0 && lista->getHead()!= nullptr)
    {
        nodo = lista->getHead()->getData();

        if (nodo->getTop() != nullptr)
        {
            danoAux1(nodo->getTop(), gladiador, listaT);
            if (nodo->getTop()->getTop() != nullptr)
            {
                danoAux2(nodo->getTop()->getTop(), gladiador, listaT);
            }
        }

        if (nodo->getRight() != nullptr)
        {
            danoAux1(nodo->getRight(), gladiador, listaT);
            if (nodo->getRight()->getRight() != nullptr)
            {
                danoAux2(nodo->getRight()->getRight(), gladiador, listaT);
            }
        }

        if (nodo->getLeft() != nullptr)
        {
            danoAux1(nodo->getLeft(), gladiador, listaT);
            if (nodo->getLeft()->getLeft() != nullptr)
            {
                danoAux2(nodo->getLeft()->getLeft(), gladiador, listaT);
            }
        }

        if (nodo->getBottom() != nullptr)
        {
            danoAux1(nodo->getBottom(), gladiador, listaT);
            if (nodo->getBottom()->getBottom() != nullptr)
            {
                danoAux2(nodo->getBottom()->getBottom(), gladiador, listaT);
            }
        }

        if (nodo->getDiagTopleft() != nullptr)
        {
            danoAux1(nodo->getDiagTopleft(), gladiador, listaT);
            if (nodo->getDiagTopleft()->getDiagTopleft() != nullptr)
            {
                danoAux2(nodo->getDiagTopleft()->getDiagTopleft(), gladiador, listaT);
            }
        }

        if (nodo->getDiagTopRight() != nullptr)
        {
            danoAux1(nodo->getDiagTopRight(), gladiador, listaT);
            if (nodo->getDiagTopRight()->getDiagTopRight() != nullptr)
            {
                danoAux2(nodo->getDiagTopRight()->getDiagTopRight(), gladiador, listaT);
            }
        }

        if (nodo->getDiagBottomleft() != nullptr)
        {
            danoAux1(nodo->getDiagBottomleft(), gladiador, listaT);
            if (nodo->getDiagBottomleft()->getDiagBottomleft() != nullptr)
            {
                danoAux2(nodo->getDiagBottomleft()->getDiagBottomleft(), gladiador, listaT);
            }
        }

        if (nodo->getDiagBottomRight() != nullptr)
        {
            danoAux1(nodo->getDiagBottomRight(), gladiador, listaT);
            if (nodo->getDiagBottomRight()->getDiagBottomRight() != nullptr)
            {
                danoAux2(nodo->getDiagBottomRight()->getDiagBottomRight(), gladiador, listaT);
            }
        }


        final->enqueue(nodo);
        lista->dequeue();
    }
    return final;
}
Lista* Simulacion::danoAStar(Gladiador* gladiador, Lista* lista, ListaTorres listaT)
{
    Nodo_Matriz* nodo;
    Lista* final = new Lista();

    while (gladiador->resistencia > 0 && lista->getTail()!= nullptr)
    {
        nodo = lista->getTail()->getData();

        if (nodo->getTop() != nullptr)
        {
            danoAux1(nodo->getTop(), gladiador, listaT);
            if (nodo->getTop()->getTop() != nullptr)
            {
                danoAux2(nodo->getTop()->getTop(), gladiador, listaT);
            }
        }

        if (nodo->getRight() != nullptr)
        {
            danoAux1(nodo->getRight(), gladiador, listaT);
            if (nodo->getRight()->getRight() != nullptr)
            {
                danoAux2(nodo->getRight()->getRight(), gladiador, listaT);
            }
        }

        if (nodo->getLeft() != nullptr)
        {
            danoAux1(nodo->getLeft(), gladiador, listaT);
            if (nodo->getLeft()->getLeft() != nullptr)
            {
                danoAux2(nodo->getLeft()->getLeft(), gladiador, listaT);
            }
        }

        if (nodo->getBottom() != nullptr)
        {
            danoAux1(nodo->getBottom(), gladiador, listaT);
            if (nodo->getBottom()->getBottom() != nullptr)
            {
                danoAux2(nodo->getBottom()->getBottom(), gladiador, listaT);
            }
        }

        if (nodo->getDiagTopleft() != nullptr)
        {
            danoAux1(nodo->getDiagTopleft(), gladiador, listaT);
            if (nodo->getDiagTopleft()->getDiagTopleft() != nullptr)
            {
                danoAux2(nodo->getDiagTopleft()->getDiagTopleft(), gladiador, listaT);
            }
        }

        if (nodo->getDiagTopRight() != nullptr)
        {
            danoAux1(nodo->getDiagTopRight(), gladiador, listaT);
            if (nodo->getDiagTopRight()->getDiagTopRight() != nullptr)
            {
                danoAux2(nodo->getDiagTopRight()->getDiagTopRight(), gladiador, listaT);
            }
        }

        if (nodo->getDiagBottomleft() != nullptr)
        {
            danoAux1(nodo->getDiagBottomleft(), gladiador, listaT);
            if (nodo->getDiagBottomleft()->getDiagBottomleft() != nullptr)
            {
                danoAux2(nodo->getDiagBottomleft()->getDiagBottomleft(), gladiador, listaT);
            }
        }

        if (nodo->getDiagBottomRight() != nullptr)
        {
            danoAux1(nodo->getDiagBottomRight(), gladiador, listaT);
            if (nodo->getDiagBottomRight()->getDiagBottomRight() != nullptr)
            {
                danoAux2(nodo->getDiagBottomRight()->getDiagBottomRight(), gladiador, listaT);
            }
        }


        final->enqueue(nodo);
        lista->pop();
    }
    return final;

}
void Simulacion::danoAux1(Nodo_Matriz* nodo, Gladiador* gladiador, ListaTorres listaT)
{
    if (nodo->getFlag() == true)
    {
        Torre torre = listaT.buscartorre(nodo->getX(), nodo->getY());
        int resist = gladiador->resistencia - torre.dano;
        gladiador->resistencia = resist;
    }
}
void Simulacion::danoAux2(Nodo_Matriz* nodo, Gladiador* gladiador, ListaTorres listaT)
{
    if (nodo->getFlag() == true)
    {
        Torre torre = listaT.buscartorre(nodo->getX(), nodo->getY());
        if (torre.getTipo() != "1") {
            int resist = gladiador->resistencia - torre.dano;
            gladiador->resistencia = resist;
        }
    }
}