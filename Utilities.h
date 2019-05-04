//
// Created by gacova on 26/04/19.
//

#ifndef GALDSERVER_UTILITIES_H
#define GALDSERVER_UTILITIES_H

#include <stdlib.h>
#include <time.h>
#include <random>
#include <iostream>
class Utilities {
public:

    static int random(int min, int max);
    static float random(float min, float max);
    static int randoms(int min, int max);
};


#endif //GALDSERVER_UTILITIES_H
