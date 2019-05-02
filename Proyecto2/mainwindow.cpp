#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include "QString"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include "clienthandler.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fillMat();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::addTorre(){

    QString torre = getTorre(cl.a);
    QString caso1 = ":/caminoTVerticalAbajo.jpg";
    QString caso2 = ":/caminoTHorizontalArriba.jpg";

    switch (cl.b) {

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





void MainWindow::on_crearmat_clicked()
{
    cl.send2Server("hola");
    addTorre();
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
