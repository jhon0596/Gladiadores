//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_listanodo_H
#define GLADIADORESSERVER_listanodo_H


class listanodo {
private:
    int x;
    int y;
    listanodo* next;
    listanodo* before;

public:
    listanodo();
    // Getters and setters basicos
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);
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
};


#endif //GLADIADORESSERVER_listanodo_H
