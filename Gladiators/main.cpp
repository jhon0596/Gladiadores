#include "mainwindow.h"
#include <QApplication>

#include <iostream>

#include "matriz.h"
#include "backtrack.h"
#include "astar.h"

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    int n = 5;
    Matriz *matriz = new Matriz(n,n);

    matriz->setObstacle(0,1);
    matriz->setObstacle(1,1);
    matriz->setObstacle(4,0);
    matriz->setObstacle(4,1);
    matriz->setObstacle(3,4);

    matriz->printMatriz();

    BackTrack bactrack;
    AStar astar;
    bool hayCaminoBacktrack, hayCaminoAStar;
    hayCaminoBacktrack = bactrack.findPath(matriz,0,0,n,n);
    hayCaminoAStar = astar.findPath(matriz,0,0,n,n);

    if(hayCaminoBacktrack)
    {
        bactrack.printSol();
        bactrack.printVis();
    }else
    {
        bactrack.printVis();
        std::cout<< "No hay solucion Bactrack\n";
    }

    if(hayCaminoBacktrack)
    {
        astar.printSol();
    }else
    {
        astar.printClose();
        std::cout<< "No hay solucion Bactrack\n";
    }

    bactrack.clean();
    bactrack.printSol();
    bactrack.printVis();

    return 0;//a.exec();
}
