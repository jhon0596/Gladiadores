#ifndef LISTANODO_H
#define LISTANODO_H


class ListaNodo
{
private:
    int x;
    int y;
    ListaNodo* next;
    ListaNodo* before;

public:
    ListaNodo();
    // Getters and setters basicos
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);
    ListaNodo *getNext() const;
    /**
     * @brief setNext setea el siguiente ListaNodo
     * @param ListaNodo*
     */
    void setNext(ListaNodo *value);
    ListaNodo *getBefore() const;
    /**
     * @brief setBefore setea el ListaNodo anterior
     * @param ListaNodo*
     */
    void setBefore(ListaNodo *value);
};

#endif // LISTANODO_H
