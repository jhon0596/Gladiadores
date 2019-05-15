//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_listanodo_H
#define GLADIADORESSERVER_listanodo_H
#include "nodo_matriz.h"

class listanodo {
private:
    Nodo_Matriz *data;
    listanodo* next;
    listanodo* before;

public:
    listanodo();
    // Getters and setters basicos
    listanodo *getNext() const;
    /**
     * @brief setNext setea el siguiente listanodo
     * @param listanodo*
     */
    void setNext(listanodo *value);
    listanodo *getBefore() const;
    /**
     * @brief setBefore setea el listanodo anterior
     * @param listanodo*
     */
    void setBefore(listanodo *value);
    Nodo_Matriz *getData() const;
    void setData(Nodo_Matriz *value);
};


#endif //GLADIADORESSERVER_listanodo_H
