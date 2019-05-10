#ifndef NODOASTAR_H
#define NODOASTAR_H


class NodoAStar
{
private:
    int x;
    int y;
    NodoAStar* parent;
    NodoAStar* before;
    NodoAStar* next;
    int H;
    int F;
    int G;
public:
    NodoAStar();
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);
    NodoAStar *getParent() const;
    void setParent(NodoAStar *value);
    int getH() const;
    void setH(int value);
    int getF() const;
    void setF(int value);
    int getG() const;
    void setG(int value);
    NodoAStar *getBefore() const;
    void setBefore(NodoAStar *value);
    NodoAStar *getNext() const;
    void setNext(NodoAStar *value);
};

#endif // NODOASTAR_H
