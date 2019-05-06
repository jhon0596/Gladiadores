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
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);
    ListaNodo *getNext() const;
    void setNext(ListaNodo *value);
    ListaNodo *getBefore() const;
    void setBefore(ListaNodo *value);
};

#endif // LISTANODO_H
