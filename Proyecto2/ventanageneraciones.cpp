#include "ventanageneraciones.h"
#include "ui_ventanageneraciones.h"

VentanaGeneraciones::VentanaGeneraciones(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaGeneraciones)
{
    ui->setupUi(this);
}

VentanaGeneraciones::~VentanaGeneraciones()
{
    delete ui;
}
