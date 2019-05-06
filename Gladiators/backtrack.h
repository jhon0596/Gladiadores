#ifndef BACKTRACK_H
#define BACKTRACK_H

#include <iostream>

#include "matriz.h"
#include "nodo_matriz.h"
#include "lista.h"


class BackTrack
{
private:
    Lista solucion;
    Lista visitados;
public:
    BackTrack();
    bool findPath(Matriz* matriz, int x, int y, int i, int j);
    bool isSolution (Nodo_Matriz* start, Nodo_Matriz* end);
    void printSol();
    void printVis();
};

#endif // BACKTRACK_H
