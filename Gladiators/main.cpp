#include "mainwindow.h"
#include <QApplication>

#include <iostream>

#include "matriz.h"
#include "backtrack.h"
#include "lista.h"

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    int n = 10;
    Matriz *matriz = new Matriz(n,n);

    matriz->setObstacle(1,0);
    matriz->setObstacle(1,3);
    //matriz->setObstacle(2,3);
    matriz->setObstacle(3,0);
    matriz->setObstacle(8,9);
    matriz->setObstacle(9,8);

    matriz->printMatriz();

    BackTrack bactrack;
    bool hayCamino;

    hayCamino = bactrack.findPath(matriz,0,0,n,n);

    if(hayCamino)
    {
        bactrack.printSol();
        bactrack.printVis();
    }else
    {
        bactrack.printVis();
        std::cout<< "No hay solucion\n";
    }
    /*
    Lista lista;

    lista.enqueue(0,0);
    lista.enqueue(0,1);
    lista.enqueue(0,2);
    lista.enqueue(0,3);
    lista.enqueue(1,0);

    lista.printMe();
    */
    return 0;//a.exec();
}
