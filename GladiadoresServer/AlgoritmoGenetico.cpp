//
// Created by gacova on 14/05/19.
//

#include "AlgoritmoGenetico.h"
/* function to swap data of two nodes a and b*/
void AlgoritmoGenetico::swap(NodoGladiador *a, NodoGladiador *b)
{
    Gladiador* temp = a->getgladiador();
    a->setgladiador(b->getgladiador()) ;
    b->setgladiador(temp);
}

/* Bubble sort the given linked list */
void AlgoritmoGenetico::bubbleSort(ListaGladiadores *start)
{
    int swapped, i;
    NodoGladiador *ptr1;
    NodoGladiador *lptr = NULL;

    /* Checking for empty list */
    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = start->head;

        while (ptr1->getNext() != lptr)
        {
            if (ptr1->getgladiador()->calcFitn() < ptr1->getNext()->getgladiador()->calcFitn())
            {
                swap(ptr1, ptr1->getNext());
                swapped = 1;
            }
            ptr1 = ptr1->getNext();
        }
        lptr = ptr1;
    }
    while (swapped);
}


AlgoritmoGenetico::AlgoritmoGenetico() {


}

void AlgoritmoGenetico::cruzarPoblacion(ListaGladiadores* listaglad) {
    int MutationRate = 25; // We are going to use this for mutation of genes 1000 = 100% 1 = .01% mutation rate
    int InversionRate = 5;
    srand(time(NULL));

    //create a population and initialize it with random DNA, also set the fitness to 0
    LG = listaglad;

    //we will use a variable to keep track of how many generations there have been
    Generation ++;
    //we sort the List so, we have the best gladiator upfront
    bubbleSort(LG);

    ListaGladiadores* LPadres = new ListaGladiadores();
    NodoGladiador* temp1 = LG->head;
    for (int i=0;i<10;i++){
        LPadres->add(temp1->getgladiador());
        temp1 = temp1->getNext();
    }

    for (int i=0;i<5;i++){

        Gladiador* glad1 = LPadres->head->getgladiador();
        Gladiador* glad2 = LPadres->head->getNext()->getgladiador();
        LPadres->head = LPadres->head->getNext()->getNext();
        int manu = LPadres->getSize();
        manu--;
        manu--;
        LPadres->setSize(manu);

        std::bitset<30> btG1(glad1->atributos);
        std::bitset<30> btG2(glad2->atributos);
        int arry[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

        int j=0;
        std::bitset<6> tmp;
        for(int l=0;l<31;l++){
            if(l<=12){
                if(j<6){
                    tmp[j]=btG1[l];
                    j++;

                }else{
                    j=0;
                    if(l<=6){
                        for(int m = 0;m<6;m++){
                            arry[m] = tmp[m];
                        }
                    }else if(l>6 && l<=12){
                        for(int m = 0;m<6;m++){
                            arry[m+6] = tmp[m];
                        }
                    }

                    tmp.reset();
                    tmp[j]=btG1[l];
                    j++;
                }
            }else{
                if(j<6){
                    tmp[j]=btG2[l];
                    j++;

                }else{
                    j=0;
                    if(l>12 && l<=18){
                        for(int m = 0;m<6;m++){
                            arry[m+12] = tmp[m];
                        }
                    }else if(l>18 && l<=24){
                        for(int m = 0;m<6;m++){
                            arry[m+18] = tmp[m];
                        }
                    }else if(l>24 && l<=31){
                        for(int m = 0;m<6;m++){
                            arry[m+24] = tmp[m];
                        }
                    }

                    tmp.reset();
                    tmp[j]=btG2[l];
                    j++;

                }
            }
        }

        std::bitset<30> nuevoGen;
        for(int n=0;n<31;n++){
            nuevoGen[n] = arry[n];
        }

        int muta = (unsigned)Utilities::random(0,1000);
        if( muta < MutationRate){
            srand(time(NULL));
            int nuevoflip = (unsigned)Utilities::random(0,24);
            int cambio = 0;
            if(muta < InversionRate){
                if(nuevoflip< 6){
                    for (int o=0;o<6;o++){
                        nuevoGen[o].flip();
                        cambio++;
                    }
                }else if(nuevoflip>=6 && nuevoflip<12){
                    for (int o=0;o<6;o++){
                        nuevoGen[o+6].flip();
                        cambio++;
                    }
                }else if(nuevoflip>=12 && nuevoflip<18){
                    for (int o=0;o<6;o++){
                        nuevoGen[o+12].flip();
                        cambio++;
                    }
                }else if(nuevoflip>=18 && nuevoflip<24){
                    for (int o=0;o<6;o++){
                        nuevoGen[o+18].flip();
                        cambio++;
                    }
                }else if(nuevoflip>=24 && nuevoflip<30){
                    for (int o=0;o<6;o++){
                        nuevoGen[o+24].flip();
                        cambio++;
                    }
                }
            }
            if(cambio == 0){
                nuevoGen[nuevoflip].flip();
            }

        }

        Gladiador* nuevoIntegrante = new Gladiador("glad"+ std::to_string(Generation)+std::to_string(i),nuevoGen.to_string());
        LG->add(nuevoIntegrante);
    }

    bubbleSort(LG);

    for (int p = 0; p<5;p++){
        LG->deleteL();
    }
}