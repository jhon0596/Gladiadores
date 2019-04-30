#include "mainwindow.h"
#include <QApplication>

#include "matriz.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Matriz *matriz = new Matriz(10,5);

    matriz->printMatriz();

    return a.exec();
}
