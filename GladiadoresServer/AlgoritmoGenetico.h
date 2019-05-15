//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_ALGORITMOGENETICO_H
#define GLADIADORESSERVER_ALGORITMOGENETICO_H
#include "Gladiador.h"
#include "ListaGladiadores.h"
#include "Utilities.h"

class AlgoritmoGenetico {
    AlgoritmoGenetico();
    void swap(NodoGladiador *a, NodoGladiador *b);
    void bubbleSort(ListaGladiadores *start);
    void cruzarPoblacion(ListaGladiadores* listaglad);
    ListaGladiadores* LG;
    int Generation;
};


#endif //GLADIADORESSERVER_ALGORITMOGENETICO_H
