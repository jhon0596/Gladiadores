#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include "QString"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include "clienthandler.h"
#include <boost/foreach.hpp>
#include "boost/property_tree/ptree.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QString caso = ":/glad1der.png";
    QString caso2 = ":/glad2dere.png";
    ui->setupUi(this);
    fillMat();
    ui->G1->setPixmap(caso);
    ui->G2->setPixmap(caso2);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::addTorre(int pos,int tipo){

    QString torre = getTorre(tipo);
    QString caso1 = ":/caminoTVerticalAbajo.jpg";
    QString caso2 = ":/caminoTHorizontalArriba.jpg";

    switch (pos) {

    case 1:
        ui->C1->setPixmap(caso1);
        break;
    case 2:
        ui->C2->setPixmap(torre);
        break;
    case 3:
        ui->C3->setPixmap(torre);
        break;
    case 4:
        ui->C4->setPixmap(torre);
        break;
    case 5:
        ui->C5->setPixmap(torre);
        break;
    case 6:
        ui->C6->setPixmap(torre);
        break;
    case 7:
        ui->C7->setPixmap(torre);
        break;
    case 8:
        ui->C8->setPixmap(torre);
        break;
    case 9:
        ui->C9->setPixmap(torre);
        break;
    case 10:
        ui->C10->setPixmap(torre);
        break;
    case 11:
        ui->C11->setPixmap(torre);
        break;
    case 12:
        ui->C12->setPixmap(torre);
        break;
    case 13:
        ui->C13->setPixmap(torre);
        break;
    case 14:
        ui->C14->setPixmap(torre);
        break;
    case 15:
        ui->C15->setPixmap(torre);
        break;
    case 16:
        ui->C16->setPixmap(torre);
        break;
    case 17:
        ui->C17->setPixmap(torre);
        break;
    case 18:
        ui->C18->setPixmap(torre);
        break;
    case 19:
        ui->C19->setPixmap(torre);
        break;
    case 20:
        ui->C20->setPixmap(torre);
        break;
    case 21:
        ui->C21->setPixmap(torre);
        break;
    case 22:
        ui->C22->setPixmap(torre);
        break;
    case 23:
        ui->C23->setPixmap(torre);
        break;
    case 24:
        ui->C24->setPixmap(torre);
        break;
    case 25:
        ui->C25->setPixmap(torre);
        break;
    case 26:
        ui->C26->setPixmap(torre);
        break;
    case 27:
        ui->C27->setPixmap(torre);
        break;
    case 28:
        ui->C28->setPixmap(torre);
        break;
    case 29:
        ui->C29->setPixmap(torre);
        break;
    case 30:
        ui->C30->setPixmap(torre);
        break;
    case 31:
        ui->C31->setPixmap(torre);
        break;
    case 32:
        ui->C32->setPixmap(torre);
        break;
    case 33:
        ui->C33->setPixmap(torre);
        break;
    case 34:
        ui->C34->setPixmap(torre);
        break;
    case 35:
        ui->C35->setPixmap(torre);
        break;
    case 36:
        ui->C36->setPixmap(torre);
        break;
    case 37:
        ui->C37->setPixmap(torre);
        break;
    case 38:
        ui->C38->setPixmap(torre);
        break;
    case 39:
        ui->C39->setPixmap(torre);
        break;
    case 40:
        ui->C40->setPixmap(torre);
        break;
    case 41:
        ui->C41->setPixmap(torre);
        break;
    case 42:
        ui->C42->setPixmap(torre);
        break;
    case 43:
        ui->C43->setPixmap(torre);
        break;
    case 44:
        ui->C44->setPixmap(torre);
        break;
    case 45:
        ui->C45->setPixmap(torre);
        break;
    case 46:
        ui->C46->setPixmap(torre);
        break;
    case 47:
        ui->C47->setPixmap(torre);
        break;
    case 48:
        ui->C49->setPixmap(torre);
        break;
    case 50:
        ui->C50->setPixmap(torre);
        break;
    case 51:
        ui->C51->setPixmap(torre);
        break;
    case 52:
        ui->C52->setPixmap(torre);
        break;
    case 53:
        ui->C53->setPixmap(torre);
        break;
    case 54:
        ui->C54->setPixmap(torre);
        break;
    case 55:
        ui->C55->setPixmap(torre);
        break;
    case 56:
        ui->C56->setPixmap(torre);
        break;
    case 58:
        ui->C58->setPixmap(torre);
        break;
    case 59:
        ui->C59->setPixmap(torre);
        break;
    case 60:
        ui->C60->setPixmap(torre);
        break;
    case 61:
        ui->C61->setPixmap(torre);
        break;
    case 62:
        ui->C62->setPixmap(torre);
        break;
    case 63:
        ui->C63->setPixmap(torre);
        break;
    case 64:
        ui->C64->setPixmap(torre);
        break;
    case 65:
        ui->C65->setPixmap(torre);
        break;
    case 66:
        ui->C66->setPixmap(torre);
        break;
    case 67:
        ui->C67->setPixmap(torre);
        break;
    case 68:
        ui->C68->setPixmap(torre);
        break;
    case 69:
        ui->C69->setPixmap(torre);
        break;
    case 70:
        ui->C70->setPixmap(torre);
        break;
    case 71:
        ui->C71->setPixmap(torre);
        break;
    case 72:
        ui->C72->setPixmap(torre);
        break;
    case 73:
        ui->C73->setPixmap(torre);
        break;
    case 74:
        ui->C74->setPixmap(torre);
        break;
    case 75:
        ui->C75->setPixmap(torre);
        break;
    case 76:
        ui->C76->setPixmap(torre);
        break;
    case 77:
        ui->C77->setPixmap(torre);
        break;
    case 78:
        ui->C78->setPixmap(torre);
        break;
    case 79:
        ui->C79->setPixmap(torre);
        break;
    case 80:
        ui->C70->setPixmap(torre);
        break;
    case 81:
        ui->C81->setPixmap(torre);
        break;
    case 82:
        ui->C82->setPixmap(torre);
        break;
    case 83:
        ui->C83->setPixmap(torre);
        break;
    case 84:
        ui->C84->setPixmap(torre);
        break;
    case 85:
        ui->C85->setPixmap(torre);
        break;
    case 86:
        ui->C86->setPixmap(torre);
        break;
    case 87:
        ui->C87->setPixmap(torre);
        break;
    case 88:
        ui->C88->setPixmap(torre);
        break;
    case 89:
        ui->C89->setPixmap(torre);
        break;
    case 90:
        ui->C90->setPixmap(torre);
        break;
    case 91:
        ui->C91->setPixmap(torre);
        break;
    case 92:
        ui->C92->setPixmap(torre);
        break;
    case 93:
        ui->C93->setPixmap(torre);
        break;
    case 94:
        ui->C94->setPixmap(torre);
        break;
    case 95:
        ui->C95->setPixmap(torre);
        break;
    case 96:
        ui->C96->setPixmap(torre);
        break;
    case 97:
        ui->C97->setPixmap(torre);
        break;
    case 98:
        ui->C98->setPixmap(torre);
        break;
    case 99:
        ui->C99->setPixmap(torre);
        break;
    case 100:
        ui->C100->setPixmap(caso2);
        break;
    }
}

QString MainWindow::getTorre(int caso){
    QString torre;

    switch (caso) {
    case 1:
        torre = ":/torreSencilla.png";
        break;
    case 2:
        torre =":/torreFuego.png";

        break;
    case 3:
        torre = ":/torreExplosiva.png";

        break;
    }
    return torre;
}

void MainWindow::leerXML()
{

    using boost::property_tree::ptree;
    //revisar aqui

    if(cl.propSev.get<std::string>("id")=="LT"){
        int tip,pos;
        BOOST_FOREACH( ptree::value_type & v,cl.propSev.get_child("lista")){
            if(v.first=="Torre"){
                tip=v.second.get<int>("t");
                pos=v.second.get<int>("p");
                addTorre(pos,tip);
            }
        }
    }
    else if(cl.propSev.get<std::string>("id")=="LG"){
        QString info=" ";
        //aqui debe de ir la info de los gladiadores
        BOOST_FOREACH( ptree::value_type & v,cl.propSev.get_child("lista")){
            if(v.first=="gladiador"){
                info.append("Edad "+QString::number(v.second.get<int>("e"))+"\n");
                info.append("Condicion fisica:"+QString::number(v.second.get<int>("conf"))+"\n");
                info.append("Fuerza Tronco Superior:"+QString::number(v.second.get<int>("trsup"))+"\n");
                info.append("Fuerza Tronco Inferior:"+QString::number(v.second.get<int>("trinf"))+"\n");
                info.append("Fuerza Emocional:"+QString::number(v.second.get<int>("emoji"))+"\n");
                ui->G1Datos->setText(info);
            }
        }
    }

}





void MainWindow::on_crearmat_clicked()
{
    cl.send2Server("t");
    leerXML();
    cl.send2Server("g");
    leerXML();
}

void MainWindow::fillMat()
{
    QString caso1 = ":/caminoTVerticalAbajo.jpg";
    QString caso2 = ":/caminoTHorizontalArriba.jpg";
    QString caso3 =":/caminoT.jpg";
    QString caso4 =":/caminoCurvaHV.jpg";
    QString caso5 =":/caminoUnionVH.jpg";
    QString caso6 =":/caminoTizquierda.jpg";
    QString caso7 =":/caminoCurvaVH.jpg";

    ui->C1->setPixmap(caso1);
    ui->C2->setPixmap(caso1);
    ui->C3->setPixmap(caso1);
    ui->C4->setPixmap(caso1);
    ui->C5->setPixmap(caso1);
    ui->C6->setPixmap(caso1);
    ui->C7->setPixmap(caso1);
    ui->C8->setPixmap(caso1);
    ui->C9->setPixmap(caso1);
    ui->C10->setPixmap(caso4);
    //=========================================
    ui->C11->setPixmap(caso6);
    ui->C12->setPixmap(caso3);
    ui->C13->setPixmap(caso3);
    ui->C14->setPixmap(caso3);
    ui->C15->setPixmap(caso3);
    ui->C16->setPixmap(caso3);
    ui->C17->setPixmap(caso3);
    ui->C18->setPixmap(caso3);
    ui->C19->setPixmap(caso3);
    ui->C20->setPixmap(caso5);

    //=============================================
    ui->C21->setPixmap(caso6);
    ui->C22->setPixmap(caso3);
    ui->C23->setPixmap(caso3);
    ui->C24->setPixmap(caso3);
    ui->C25->setPixmap(caso3);
    ui->C26->setPixmap(caso3);
    ui->C27->setPixmap(caso3);
    ui->C28->setPixmap(caso3);
    ui->C29->setPixmap(caso3);
    ui->C30->setPixmap(caso5);
    //=============================================
    ui->C31->setPixmap(caso6);
    ui->C32->setPixmap(caso3);
    ui->C33->setPixmap(caso3);
    ui->C34->setPixmap(caso3);
    ui->C35->setPixmap(caso3);
    ui->C36->setPixmap(caso3);
    ui->C37->setPixmap(caso3);
    ui->C38->setPixmap(caso3);
    ui->C39->setPixmap(caso3);
    ui->C40->setPixmap(caso5);

    //=============================================
    ui->C41->setPixmap(caso6);
    ui->C42->setPixmap(caso3);
    ui->C43->setPixmap(caso3);
    ui->C44->setPixmap(caso3);
    ui->C45->setPixmap(caso3);
    ui->C46->setPixmap(caso3);
    ui->C47->setPixmap(caso3);
    ui->C48->setPixmap(caso3);
    ui->C49->setPixmap(caso3);
    ui->C50->setPixmap(caso5);
    //=============================================
    ui->C51->setPixmap(caso6);
    ui->C52->setPixmap(caso3);
    ui->C53->setPixmap(caso3);
    ui->C54->setPixmap(caso3);
    ui->C55->setPixmap(caso3);
    ui->C56->setPixmap(caso3);
    ui->C57->setPixmap(caso3);
    ui->C58->setPixmap(caso3);
    ui->C59->setPixmap(caso3);
    ui->C60->setPixmap(caso5);
    //=============================================
    ui->C61->setPixmap(caso6);
    ui->C62->setPixmap(caso3);
    ui->C63->setPixmap(caso3);
    ui->C64->setPixmap(caso3);
    ui->C65->setPixmap(caso3);
    ui->C66->setPixmap(caso3);
    ui->C67->setPixmap(caso3);
    ui->C68->setPixmap(caso3);
    ui->C69->setPixmap(caso3);
    ui->C70->setPixmap(caso5);
    //=============================================
    ui->C71->setPixmap(caso6);
    ui->C72->setPixmap(caso3);
    ui->C73->setPixmap(caso3);
    ui->C74->setPixmap(caso3);
    ui->C75->setPixmap(caso3);
    ui->C76->setPixmap(caso3);
    ui->C77->setPixmap(caso3);
    ui->C78->setPixmap(caso3);
    ui->C79->setPixmap(caso3);
    ui->C80->setPixmap(caso5);
    //=============================================
    ui->C81->setPixmap(caso6);
    ui->C82->setPixmap(caso3);
    ui->C83->setPixmap(caso3);
    ui->C84->setPixmap(caso3);
    ui->C85->setPixmap(caso3);
    ui->C86->setPixmap(caso3);
    ui->C87->setPixmap(caso3);
    ui->C88->setPixmap(caso3);
    ui->C89->setPixmap(caso3);
    ui->C90->setPixmap(caso5);
    //=============================================
    ui->C91->setPixmap(caso7);
    ui->C92->setPixmap(caso2);
    ui->C93->setPixmap(caso2);
    ui->C94->setPixmap(caso2);
    ui->C95->setPixmap(caso2);
    ui->C96->setPixmap(caso2);
    ui->C97->setPixmap(caso2);
    ui->C98->setPixmap(caso2);
    ui->C99->setPixmap(caso2);
    ui->C100->setPixmap(caso2);
}



void MainWindow::moverGladiador1Abajo(int x, int y){
    QString caso = ":/glad1frente.png";
    ui->G1->setGeometry(x,y+1,25,25);
    ui->G1->setPixmap(caso);
}

void MainWindow::moverGladiador1Arriba(int x, int y){
    QString caso = ":/glad1atras.png";
    ui->G1->setGeometry(x,y-1,25,25);
    ui->G1->setPixmap(caso);

}
void MainWindow::moverGladiador1Derecha(int x, int y){
    QString caso = ":/glad1der.png";
    ui->G1->setGeometry(x+1,y,25,25);
    ui->G1->setPixmap(caso);

}

void MainWindow::moverGladiador1Izquierda(int x, int y){
    QString caso = ":/glad1izq.png";
    ui->G1->setGeometry(x-1,y,25,25);
    ui->G1->setPixmap(caso);

}

void MainWindow::mover1(int casillaActual, int casillaSiguiente){

    if(casillaActual-casillaSiguiente == 1){
        for (int i = 0; i < 80; ++i) {
            moverGladiador1Izquierda(ui->G1->x(),ui->G1->y());
            QString caso = ":/transparente.png";
            ui->lb->setPixmap(caso);
            ui->lb_2->setPixmap(caso);
            ui->lb_3->setPixmap(caso);
            ui->lb_4->setPixmap(caso);
            ui->lb_5->setPixmap(caso);
            ui->lb_6->setPixmap(caso);
            ui->lb_7->setPixmap(caso);
            ui->lb_8->setPixmap(caso);
            ui->lb_9->setPixmap(caso);
            ui->lb_10->setPixmap(caso);
            ui->lb_11->setPixmap(caso);
            ui->lb_12->setPixmap(caso);
            ui->lb_13->setPixmap(caso);
            ui->lb_14->setPixmap(caso);
            ui->lb_15->setPixmap(caso);
            ui->lb_16->setPixmap(caso);
            ui->lb_17->setPixmap(caso);
            ui->lb_18->setPixmap(caso);
            ui->lb_19->setPixmap(caso);
            ui->lb_20->setPixmap(caso);
            ui->lb_21->setPixmap(caso);
            ui->lb_22->setPixmap(caso);
            ui->lb_23->setPixmap(caso);
            ui->lb_24->setPixmap(caso);

        }

    }
    if(casillaActual-casillaSiguiente == -1){
        for (int i = 0; i < 80; ++i) {
             moverGladiador1Derecha(ui->G1->x(),ui->G1->y());
             QString caso = ":/transparente.png";
             ui->lb->setPixmap(caso);
             ui->lb_2->setPixmap(caso);
             ui->lb_3->setPixmap(caso);
             ui->lb_4->setPixmap(caso);
             ui->lb_5->setPixmap(caso);
             ui->lb_6->setPixmap(caso);
             ui->lb_7->setPixmap(caso);
             ui->lb_8->setPixmap(caso);
             ui->lb_9->setPixmap(caso);
             ui->lb_10->setPixmap(caso);
             ui->lb_11->setPixmap(caso);
             ui->lb_12->setPixmap(caso);
             ui->lb_13->setPixmap(caso);
             ui->lb_14->setPixmap(caso);
             ui->lb_15->setPixmap(caso);
             ui->lb_16->setPixmap(caso);
             ui->lb_17->setPixmap(caso);
             ui->lb_18->setPixmap(caso);
             ui->lb_19->setPixmap(caso);
             ui->lb_20->setPixmap(caso);
             ui->lb_21->setPixmap(caso);
             ui->lb_22->setPixmap(caso);
             ui->lb_23->setPixmap(caso);
             ui->lb_24->setPixmap(caso);

        }
    }
    if(casillaActual-casillaSiguiente == 10){
        for (int i = 0; i < 80; ++i) {
            moverGladiador1Arriba(ui->G1->x(),ui->G1->y());
            QString caso = ":/transparente.png";
            ui->lb->setPixmap(caso);
            ui->lb_2->setPixmap(caso);
            ui->lb_3->setPixmap(caso);
            ui->lb_4->setPixmap(caso);
            ui->lb_5->setPixmap(caso);
            ui->lb_6->setPixmap(caso);
            ui->lb_7->setPixmap(caso);
            ui->lb_8->setPixmap(caso);
            ui->lb_9->setPixmap(caso);
            ui->lb_10->setPixmap(caso);
            ui->lb_11->setPixmap(caso);
            ui->lb_12->setPixmap(caso);
            ui->lb_13->setPixmap(caso);
            ui->lb_14->setPixmap(caso);
            ui->lb_15->setPixmap(caso);
            ui->lb_16->setPixmap(caso);
            ui->lb_17->setPixmap(caso);
            ui->lb_18->setPixmap(caso);
            ui->lb_19->setPixmap(caso);
            ui->lb_20->setPixmap(caso);
            ui->lb_21->setPixmap(caso);
            ui->lb_22->setPixmap(caso);
            ui->lb_23->setPixmap(caso);
            ui->lb_24->setPixmap(caso);

        }
    }
    if(casillaActual-casillaSiguiente == -10){
        for (int i = 0; i < 80; ++i) {
            moverGladiador1Abajo(ui->G1->x(),ui->G1->y());
            QString caso = ":/transparente.png";
            ui->lb->setPixmap(caso);
            ui->lb_2->setPixmap(caso);
            ui->lb_3->setPixmap(caso);
            ui->lb_4->setPixmap(caso);
            ui->lb_5->setPixmap(caso);
            ui->lb_6->setPixmap(caso);
            ui->lb_7->setPixmap(caso);
            ui->lb_8->setPixmap(caso);
            ui->lb_9->setPixmap(caso);
            ui->lb_10->setPixmap(caso);
            ui->lb_11->setPixmap(caso);
            ui->lb_12->setPixmap(caso);
            ui->lb_13->setPixmap(caso);
            ui->lb_14->setPixmap(caso);
            ui->lb_15->setPixmap(caso);
            ui->lb_16->setPixmap(caso);
            ui->lb_17->setPixmap(caso);
            ui->lb_18->setPixmap(caso);
            ui->lb_19->setPixmap(caso);
            ui->lb_20->setPixmap(caso);
            ui->lb_21->setPixmap(caso);
            ui->lb_22->setPixmap(caso);
            ui->lb_23->setPixmap(caso);
            ui->lb_24->setPixmap(caso);

        }
    }

}



void MainWindow::moverGladiador2Abajo(int x, int y){
    QString caso = ":/glad2delante.png";
    ui->G2->setGeometry(x,y+1,25,25);
    ui->G2->setPixmap(caso);
}

void MainWindow::moverGladiador2Arriba(int x, int y){
    QString caso = ":/glad2atras.png";
    ui->G2->setGeometry(x,y-1,25,25);
    ui->G2->setPixmap(caso);

}
void MainWindow::moverGladiador2Derecha(int x, int y){
    QString caso = ":/glad2dere.png";
    ui->G2->setGeometry(x+1,y,25,25);
    ui->G2->setPixmap(caso);

}

void MainWindow::moverGladiador2Izquierda(int x, int y){
    QString caso = ":/glad2izq.png";
    ui->G2->setGeometry(x-1,y,25,25);
    ui->G2->setPixmap(caso);

}

void MainWindow::mover2(int casillaActual, int casillaSiguiente){

    if(casillaActual-casillaSiguiente == 1){
        for (int i = 0; i < 80; ++i) {
            moverGladiador2Izquierda(ui->G2->x(),ui->G2->y());
            QString caso = ":/transparente.png";
            ui->lb->setPixmap(caso);
            ui->lb_2->setPixmap(caso);
            ui->lb_3->setPixmap(caso);
            ui->lb_4->setPixmap(caso);
            ui->lb_5->setPixmap(caso);
            ui->lb_6->setPixmap(caso);
            ui->lb_7->setPixmap(caso);
            ui->lb_8->setPixmap(caso);
            ui->lb_9->setPixmap(caso);
            ui->lb_10->setPixmap(caso);
            ui->lb_11->setPixmap(caso);
            ui->lb_12->setPixmap(caso);
            ui->lb_13->setPixmap(caso);
            ui->lb_14->setPixmap(caso);
            ui->lb_15->setPixmap(caso);
            ui->lb_16->setPixmap(caso);
            ui->lb_17->setPixmap(caso);
            ui->lb_18->setPixmap(caso);
            ui->lb_19->setPixmap(caso);
            ui->lb_20->setPixmap(caso);
            ui->lb_21->setPixmap(caso);
            ui->lb_22->setPixmap(caso);
            ui->lb_23->setPixmap(caso);
            ui->lb_24->setPixmap(caso);

        }

    }
    if(casillaActual-casillaSiguiente == -1){
        for (int i = 0; i < 80; ++i) {
             moverGladiador2Derecha(ui->G2->x(),ui->G2->y());
             QString caso = ":/transparente.png";
             ui->lb->setPixmap(caso);
             ui->lb_2->setPixmap(caso);
             ui->lb_3->setPixmap(caso);
             ui->lb_4->setPixmap(caso);
             ui->lb_5->setPixmap(caso);
             ui->lb_6->setPixmap(caso);
             ui->lb_7->setPixmap(caso);
             ui->lb_8->setPixmap(caso);
             ui->lb_9->setPixmap(caso);
             ui->lb_10->setPixmap(caso);
             ui->lb_11->setPixmap(caso);
             ui->lb_12->setPixmap(caso);
             ui->lb_13->setPixmap(caso);
             ui->lb_14->setPixmap(caso);
             ui->lb_15->setPixmap(caso);
             ui->lb_16->setPixmap(caso);
             ui->lb_17->setPixmap(caso);
             ui->lb_18->setPixmap(caso);
             ui->lb_19->setPixmap(caso);
             ui->lb_20->setPixmap(caso);
             ui->lb_21->setPixmap(caso);
             ui->lb_22->setPixmap(caso);
             ui->lb_23->setPixmap(caso);
             ui->lb_24->setPixmap(caso);

        }
    }
    if(casillaActual-casillaSiguiente == 10){
        for (int i = 0; i < 80; ++i) {
            moverGladiador2Arriba(ui->G2->x(),ui->G2->y());
            QString caso = ":/transparente.png";
            ui->lb->setPixmap(caso);
            ui->lb_2->setPixmap(caso);
            ui->lb_3->setPixmap(caso);
            ui->lb_4->setPixmap(caso);
            ui->lb_5->setPixmap(caso);
            ui->lb_6->setPixmap(caso);
            ui->lb_7->setPixmap(caso);
            ui->lb_8->setPixmap(caso);
            ui->lb_9->setPixmap(caso);
            ui->lb_10->setPixmap(caso);
            ui->lb_11->setPixmap(caso);
            ui->lb_12->setPixmap(caso);
            ui->lb_13->setPixmap(caso);
            ui->lb_14->setPixmap(caso);
            ui->lb_15->setPixmap(caso);
            ui->lb_16->setPixmap(caso);
            ui->lb_17->setPixmap(caso);
            ui->lb_18->setPixmap(caso);
            ui->lb_19->setPixmap(caso);
            ui->lb_20->setPixmap(caso);
            ui->lb_21->setPixmap(caso);
            ui->lb_22->setPixmap(caso);
            ui->lb_23->setPixmap(caso);
            ui->lb_24->setPixmap(caso);

        }
    }
    if(casillaActual-casillaSiguiente == -10){
        for (int i = 0; i < 80; ++i) {
            moverGladiador2Abajo(ui->G2->x(),ui->G2->y());
            QString caso = ":/transparente.png";
            ui->lb->setPixmap(caso);
            ui->lb_2->setPixmap(caso);
            ui->lb_3->setPixmap(caso);
            ui->lb_4->setPixmap(caso);
            ui->lb_5->setPixmap(caso);
            ui->lb_6->setPixmap(caso);
            ui->lb_7->setPixmap(caso);
            ui->lb_8->setPixmap(caso);
            ui->lb_9->setPixmap(caso);
            ui->lb_10->setPixmap(caso);
            ui->lb_11->setPixmap(caso);
            ui->lb_12->setPixmap(caso);
            ui->lb_13->setPixmap(caso);
            ui->lb_14->setPixmap(caso);
            ui->lb_15->setPixmap(caso);
            ui->lb_16->setPixmap(caso);
            ui->lb_17->setPixmap(caso);
            ui->lb_18->setPixmap(caso);
            ui->lb_19->setPixmap(caso);
            ui->lb_20->setPixmap(caso);
            ui->lb_21->setPixmap(caso);
            ui->lb_22->setPixmap(caso);
            ui->lb_23->setPixmap(caso);
            ui->lb_24->setPixmap(caso);

        }
    }

}

void MainWindow::atacarTorreFuegoAG1(int casillaTorre, int casillaGladiador){

    QString caso1 = ":/ff0.png";
    QString caso2 = ":/ff45.png";
    QString caso3 = ":/ff90.png";
    QString caso4 = ":/ff135.png";
    QString caso5 = ":/ff180.png";
    QString caso6 = ":/ff225.png";
    QString caso7 = ":/ff270.png";
    QString caso8 = ":/ff315.png";

    if(casillaTorre-casillaGladiador == 22){
        ui->lb_15->setPixmap(caso4);
        ui->lb_15->setGeometry(ui->G1->x(),ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 21){
        ui->lb_14->setPixmap(caso4);
        ui->lb_14->setGeometry(ui->G1->x(),ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 20){
        ui->lb_13->setPixmap(caso3);
        ui->lb_13->setGeometry(ui->G1->x()-10,ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 19){
        ui->lb_12->setPixmap(caso2);
        ui->lb_12->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 18){

        ui->lb_11->setPixmap(caso2);
        ui->lb_11->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 12){
        ui->lb_16->setPixmap(caso4);
        ui->lb_16->setGeometry(ui->G1->x(),ui->G1->y(),50,50);
    }

    if(casillaTorre-casillaGladiador == 11){
        ui->lb_4->setPixmap(caso4);
        ui->lb_4->setGeometry(ui->G1->x(),ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 10){
        ui->lb_3->setPixmap(caso3);
        ui->lb_3->setGeometry(ui->G1->x()-10,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 9){
        ui->lb_2->setPixmap(caso2);
        ui->lb_2->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 8){
        ui->lb_10->setPixmap(caso2);
        ui->lb_10->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 2){
        ui->lb_17->setPixmap(caso5);
        ui->lb_17->setGeometry(ui->G1->x()+10,ui->G1->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == 1){
        ui->lb_5->setPixmap(caso2);
        ui->lb_5->setGeometry(ui->G1->x()+10,ui->G1->y(),50,50);

    }

    if(casillaTorre-casillaGladiador == -1){
        ui->lb->setPixmap(caso1);
        ui->lb->setGeometry(ui->G1->x()-30,ui->G1->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -2){
        ui->lb_4->setPixmap(caso1);
        ui->lb_4->setGeometry(ui->G1->x()-30,ui->G1->y()-10,50,50);


    }
    if(casillaTorre-casillaGladiador == -8){
        ui->lb_18->setPixmap(caso6);
        ui->lb_18->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -9){
        ui->lb_6->setPixmap(caso6);
        ui->lb_6->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -10){
        ui->lb_7->setPixmap(caso7);
        ui->lb_7->setGeometry(ui->G1->x()-10,ui->G1->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -11){
        ui->lb_8->setPixmap(caso8);
        ui->lb_8->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }

    if(casillaTorre-casillaGladiador == -12){
        ui->lb_24->setPixmap(caso8);
        ui->lb_24->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -18){
        ui->lb_19->setPixmap(caso6);
        ui->lb_19->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);


    }
    if(casillaTorre-casillaGladiador == -19){
        ui->lb_20->setPixmap(caso6);
        ui->lb_20->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -20){
        ui->lb_21->setPixmap(caso7);
        ui->lb_21->setGeometry(ui->G1->x()-10,ui->G1->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -21){
        ui->lb_22->setPixmap(caso8);
        ui->lb_22->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == -22){
        ui->lb_23->setPixmap(caso8);
        ui->lb_23->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);


    }
}

void MainWindow::atacarTorreSencillaAG1(int casillaTorre, int casillaGladiador){

    QString caso1 = ":/fs0.png";
    QString caso2 = ":/fs45.png";
    QString caso3 = ":/fs90.png";
    QString caso4 = ":/fs135.png";
    QString caso5 = ":/fs180.png";
    QString caso6 = ":/fs225.png";
    QString caso7 = ":/fs270.png";
    QString caso8 = ":/fs315.png";

    if(casillaTorre-casillaGladiador == 11){
        ui->lb_4->setPixmap(caso4);
        ui->lb_4->setGeometry(ui->G1->x(),ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 10){
        ui->lb_3->setPixmap(caso3);
        ui->lb_3->setGeometry(ui->G1->x()-10,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 9){
        ui->lb_2->setPixmap(caso2);
        ui->lb_2->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 8){
        ui->lb_10->setPixmap(caso2);
        ui->lb_10->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 2){
        ui->lb_17->setPixmap(caso5);
        ui->lb_17->setGeometry(ui->G1->x()+10,ui->G1->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == 1){
        ui->lb_5->setPixmap(caso2);
        ui->lb_5->setGeometry(ui->G1->x()+10,ui->G1->y(),50,50);

    }

    if(casillaTorre-casillaGladiador == -1){
        ui->lb->setPixmap(caso1);
        ui->lb->setGeometry(ui->G1->x()-30,ui->G1->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -2){
        ui->lb_4->setPixmap(caso1);
        ui->lb_4->setGeometry(ui->G1->x()-30,ui->G1->y()-10,50,50);


    }
    if(casillaTorre-casillaGladiador == -8){
        ui->lb_18->setPixmap(caso6);
        ui->lb_18->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -9){
        ui->lb_6->setPixmap(caso6);
        ui->lb_6->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -10){
        ui->lb_7->setPixmap(caso7);
        ui->lb_7->setGeometry(ui->G1->x()-10,ui->G1->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -11){
        ui->lb_8->setPixmap(caso8);
        ui->lb_8->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
}

void MainWindow::atacarTorreExplosivaAG1(int casillaTorre, int casillaGladiador){

    QString caso1 = ":/fe0.png";
    QString caso2 = ":/fe45.png";
    QString caso3 = ":/fe90.png";
    QString caso4 = ":/fe135.png";

    if(casillaTorre-casillaGladiador == 22){
        ui->lb_15->setPixmap(caso4);
        ui->lb_15->setGeometry(ui->G1->x(),ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 21){
        ui->lb_14->setPixmap(caso4);
        ui->lb_14->setGeometry(ui->G1->x(),ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 20){
        ui->lb_13->setPixmap(caso3);
        ui->lb_13->setGeometry(ui->G1->x()-10,ui->G1->y()+10,50,50);
    }
    if(casillaTorre-casillaGladiador == 19){
        ui->lb_12->setPixmap(caso2);
        ui->lb_12->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 18){
        ui->lb_11->setPixmap(caso2);
        ui->lb_11->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 12){
        ui->lb_16->setPixmap(caso4);
        ui->lb_16->setGeometry(ui->G1->x(),ui->G1->y(),50,50);
    }

    if(casillaTorre-casillaGladiador == 11){
        ui->lb_4->setPixmap(caso4);
        ui->lb_4->setGeometry(ui->G1->x(),ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 10){
        ui->lb_3->setPixmap(caso3);
        ui->lb_3->setGeometry(ui->G1->x()-10,ui->G1->y()+10,50,50);
    }
    if(casillaTorre-casillaGladiador == 9){
        ui->lb_2->setPixmap(caso2);
        ui->lb_2->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 8){
        ui->lb_10->setPixmap(caso2);
        ui->lb_10->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 2){
        ui->lb_17->setPixmap(caso1);
        ui->lb_17->setGeometry(ui->G1->x()+10,ui->G1->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == 1){
        ui->lb_5->setPixmap(caso1);
        ui->lb_5->setGeometry(ui->G1->x()+10,ui->G1->y()-10,50,50);
    }

    if(casillaTorre-casillaGladiador == -1){
        ui->lb->setPixmap(caso1);
        ui->lb->setGeometry(ui->G1->x()-30,ui->G1->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -2){
        ui->lb_9->setPixmap(caso1);
        ui->lb_9->setGeometry(ui->G1->x()-30,ui->G1->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -8){
        ui->lb_18->setPixmap(caso2);
        ui->lb_18->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -9){
        ui->lb_6->setPixmap(caso2);
        ui->lb_6->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);
    }
    if(casillaTorre-casillaGladiador == -10){
        ui->lb_7->setPixmap(caso3);
        ui->lb_7->setGeometry(ui->G1->x()-10,ui->G1->y()+10,50,50);

    }
    if(casillaTorre-casillaGladiador == -11){
        ui->lb_8->setPixmap(caso4);
        ui->lb_8->setGeometry(ui->G1->x()-20,ui->G1->y()-20,50,50);
    }

    if(casillaTorre-casillaGladiador == -12){
        ui->lb_24->setPixmap(caso4);
        ui->lb_24->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == -18){
        ui->lb_19->setPixmap(caso2);
        ui->lb_19->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);
    }
    if(casillaTorre-casillaGladiador == -19){
        ui->lb_20->setPixmap(caso2);
        ui->lb_20->setGeometry(ui->G1->x(),ui->G1->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -20){
        ui->lb_21->setPixmap(caso3);
        ui->lb_21->setGeometry(ui->G1->x()-10,ui->G1->y()+10,50,50);

    }
    if(casillaTorre-casillaGladiador == -21){
        ui->lb_22->setPixmap(caso4);
        ui->lb_22->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == -22){
        ui->lb_23->setPixmap(caso4);
        ui->lb_23->setGeometry(ui->G1->x()-20,ui->G1->y(),50,50);

    }
}

void MainWindow::atacarTorreExplosivaAG2(int casillaTorre, int casillaGladiador){

    QString caso1 = ":/fe0.png";
    QString caso2 = ":/fe45.png";
    QString caso3 = ":/fe90.png";
    QString caso4 = "/:fe135.png";


    if(casillaTorre-casillaGladiador == 22){
        ui->lb_15->setPixmap(caso4);
        ui->lb_15->setGeometry(ui->G2->x(),ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 21){
        ui->lb_14->setPixmap(caso4);
        ui->lb_14->setGeometry(ui->G2->x(),ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 20){
        ui->lb_13->setPixmap(caso3);
        ui->lb_13->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 19){
        ui->lb_12->setPixmap(caso2);
        ui->lb_12->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 18){
        ui->lb_11->setPixmap(caso2);
        ui->lb_11->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 12){
        ui->lb_16->setPixmap(caso4);
        ui->lb_16->setGeometry(ui->G2->x(),ui->G2->y(),50,50);
    }

    if(casillaTorre-casillaGladiador == 11){
        ui->lb_4->setPixmap(caso4);
        ui->lb_4->setGeometry(ui->G2->x(),ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 10){
        ui->lb_3->setPixmap(caso3);
        ui->lb_3->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 9){
        ui->lb_2->setPixmap(caso2);
        ui->lb_2->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 8){
        ui->lb_10->setPixmap(caso2);
        ui->lb_10->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 2){
        ui->lb_17->setPixmap(caso1);
        ui->lb_17->setGeometry(ui->G2->x()+10,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 1){
        ui->lb_5->setPixmap(caso1);
        ui->lb_5->setGeometry(ui->G2->x()+10,ui->G2->y(),50,50);
    }

    if(casillaTorre-casillaGladiador == -1){
        ui->lb->setPixmap(caso1);
        ui->lb->setGeometry(ui->G2->x()-30,ui->G2->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -2){
        ui->lb_9->setPixmap(caso1);
        ui->lb_9->setGeometry(ui->G2->x()-30,ui->G2->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -8){
        ui->lb_18->setPixmap(caso2);
        ui->lb_18->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -9){
        ui->lb_6->setPixmap(caso2);
        ui->lb_6->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);
    }
    if(casillaTorre-casillaGladiador == -10){
        ui->lb_7->setPixmap(caso3);
        ui->lb_7->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == -11){
        ui->lb_8->setPixmap(caso4);
        ui->lb_8->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);
    }

    if(casillaTorre-casillaGladiador == -12){
        ui->lb_24->setPixmap(caso4);
        ui->lb_24->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == -18){
        ui->lb_19->setPixmap(caso2);
        ui->lb_19->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);
    }
    if(casillaTorre-casillaGladiador == -19){
        ui->lb_20->setPixmap(caso2);
        ui->lb_20->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -20){
        ui->lb_21->setPixmap(caso3);
        ui->lb_21->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == -21){
        ui->lb_22->setPixmap(caso4);
        ui->lb_22->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == -22){
        ui->lb_23->setPixmap(caso4);
        ui->lb_23->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
}

void MainWindow::atacarTorreSencillaAG2(int casillaTorre, int casillaGladiador){

    QString caso1 = ":/fs0.png";
    QString caso2 = ":/fs45.png";
    QString caso3 = ":/fs90.png";
    QString caso4 = ":/fs135.png";
    QString caso5 = ":/fs180.png";
    QString caso6 = ":/fs225.png";
    QString caso7 = ":/fs270.png";
    QString caso8 = ":/fs315.png";

    if(casillaTorre-casillaGladiador == 11){
        ui->lb_4->setPixmap(caso4);
        ui->lb_4->setGeometry(ui->G2->x(),ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 10){
        ui->lb_3->setPixmap(caso3);
        ui->lb_3->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 9){
        ui->lb_2->setPixmap(caso2);
        ui->lb_2->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 8){
        ui->lb_10->setPixmap(caso2);
        ui->lb_10->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 2){
        ui->lb_17->setPixmap(caso5);
        ui->lb_17->setGeometry(ui->G2->x()+10,ui->G2->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == 1){
        ui->lb_5->setPixmap(caso2);
        ui->lb_5->setGeometry(ui->G2->x()+10,ui->G2->y(),50,50);

    }

    if(casillaTorre-casillaGladiador == -1){
        ui->lb->setPixmap(caso1);
        ui->lb->setGeometry(ui->G2->x()-30,ui->G2->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -2){
        ui->lb_4->setPixmap(caso1);
        ui->lb_4->setGeometry(ui->G2->x()-30,ui->G2->y()-10,50,50);


    }
    if(casillaTorre-casillaGladiador == -8){
        ui->lb_18->setPixmap(caso6);
        ui->lb_18->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -9){
        ui->lb_6->setPixmap(caso6);
        ui->lb_6->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -10){
        ui->lb_7->setPixmap(caso7);
        ui->lb_7->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -11){
        ui->lb_8->setPixmap(caso8);
        ui->lb_8->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
}

void MainWindow::atacarTorreFuegoAG2(int casillaTorre, int casillaGladiador){

    QString caso1 = ":/ff0.png";
    QString caso2 = ":/ff45.png";
    QString caso3 = ":/ff90.png";
    QString caso4 = ":/ff135.png";
    QString caso5 = ":/ff180.png";
    QString caso6 = ":/ff225.png";
    QString caso7 = ":/ff270.png";
    QString caso8 = ":/ff315.png";

    if(casillaTorre-casillaGladiador == 22){
        ui->lb_15->setPixmap(caso4);
        ui->lb_15->setGeometry(ui->G2->x(),ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 21){
        ui->lb_14->setPixmap(caso4);
        ui->lb_14->setGeometry(ui->G2->x(),ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 20){
        ui->lb_13->setPixmap(caso3);
        ui->lb_13->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 19){
        ui->lb_12->setPixmap(caso2);
        ui->lb_12->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 18){

        ui->lb_11->setPixmap(caso2);
        ui->lb_11->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);
    }
    if(casillaTorre-casillaGladiador == 12){
        ui->lb_16->setPixmap(caso4);
        ui->lb_16->setGeometry(ui->G2->x(),ui->G2->y(),50,50);
    }

    if(casillaTorre-casillaGladiador == 11){
        ui->lb_4->setPixmap(caso4);
        ui->lb_4->setGeometry(ui->G1->x(),ui->G1->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 10){
        ui->lb_3->setPixmap(caso3);
        ui->lb_3->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 9){
        ui->lb_2->setPixmap(caso2);
        ui->lb_2->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 8){
        ui->lb_10->setPixmap(caso2);
        ui->lb_10->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == 2){
        ui->lb_17->setPixmap(caso5);
        ui->lb_17->setGeometry(ui->G2->x()+10,ui->G2->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == 1){
        ui->lb_5->setPixmap(caso2);
        ui->lb_5->setGeometry(ui->G2->x()+10,ui->G2->y(),50,50);

    }

    if(casillaTorre-casillaGladiador == -1){
        ui->lb->setPixmap(caso1);
        ui->lb->setGeometry(ui->G2->x()-30,ui->G2->y()-10,50,50);

    }
    if(casillaTorre-casillaGladiador == -2){
        ui->lb_4->setPixmap(caso1);
        ui->lb_4->setGeometry(ui->G2->x()-30,ui->G2->y()-10,50,50);


    }
    if(casillaTorre-casillaGladiador == -8){
        ui->lb_18->setPixmap(caso6);
        ui->lb_18->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -9){
        ui->lb_6->setPixmap(caso6);
        ui->lb_6->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -10){
        ui->lb_7->setPixmap(caso7);
        ui->lb_7->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -11){
        ui->lb_8->setPixmap(caso8);
        ui->lb_8->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }

    if(casillaTorre-casillaGladiador == -12){
        ui->lb_24->setPixmap(caso8);
        ui->lb_24->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -18){
        ui->lb_19->setPixmap(caso6);
        ui->lb_19->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);


    }
    if(casillaTorre-casillaGladiador == -19){
        ui->lb_20->setPixmap(caso6);
        ui->lb_20->setGeometry(ui->G2->x(),ui->G2->y()-20,50,50);

    }
    if(casillaTorre-casillaGladiador == -20){
        ui->lb_21->setPixmap(caso7);
        ui->lb_21->setGeometry(ui->G2->x()-10,ui->G2->y(),50,50);


    }
    if(casillaTorre-casillaGladiador == -21){
        ui->lb_22->setPixmap(caso8);
        ui->lb_22->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);

    }
    if(casillaTorre-casillaGladiador == -22){
        ui->lb_23->setPixmap(caso8);
        ui->lb_23->setGeometry(ui->G2->x()-20,ui->G2->y(),50,50);


    }
}


void MainWindow:: atacar(QString gladiador, QString torre, int casillaTorre, int casillaGladiador){
    if(gladiador == "g1" && torre == "sencilla"){
        atacarTorreSencillaAG1(casillaTorre,casillaGladiador);
    }
    if(gladiador == "g1" && torre == "fuego"){
        atacarTorreFuegoAG1(casillaTorre,casillaGladiador);
    }
    if(gladiador == "g1" && torre == "explosiva"){
        atacarTorreExplosivaAG1(casillaTorre,casillaGladiador);
    }
    if(gladiador == "g2" && torre == "sencilla"){
        atacarTorreSencillaAG2(casillaTorre,casillaGladiador);
    }
    if(gladiador == "g2" && torre == "fuego"){
        atacarTorreFuegoAG2(casillaTorre,casillaGladiador);
    }
    if(gladiador == "g2" && torre == "explosiva"){
        atacarTorreExplosivaAG2(casillaTorre,casillaGladiador);
    }
}

void MainWindow::on_pushButton_clicked()
{
    generaciones = new VentanaGeneraciones(this);
    generaciones->show();
}
