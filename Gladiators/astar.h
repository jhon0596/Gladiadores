#ifndef ASTAR_H
#define ASTAR_H

#include "matriz.h"

class AStar
{
public:
    AStar();
    bool findPath(Matriz* matriz, int x, int y, int i, int j);
    void printSol();
    void printClose();
};

#endif // ASTAR_H
