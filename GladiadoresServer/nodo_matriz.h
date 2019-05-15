//
// Created by gacova on 14/05/19.
//

#ifndef GLADIADORESSERVER_NODO_MATRIZ_H
#define GLADIADORESSERVER_NODO_MATRIZ_H

#include <math.h>
#include <string>
/**
 * @brief The Nodo_Matriz class, es un nodo enlazado en 8 direcciones, arriba, abajo, izquierda
 * derecha y sus respectivas diagonales.
 */
class Nodo_Matriz
{
private:
private:
    int x;
    int y;
    bool flag;
    bool visited;
    float H;
    float G;
    float F;
    Nodo_Matriz* parent;
    Nodo_Matriz* top;
    Nodo_Matriz* bottom;
    Nodo_Matriz* right;
    Nodo_Matriz* left;
    Nodo_Matriz* diagTopleft;
    Nodo_Matriz* diagTopRight;
    Nodo_Matriz* diagBottomleft;
    Nodo_Matriz* diagBottomRight;

public:
    Nodo_Matriz();
    bool getFlag();
    Nodo_Matriz* getTop();
    Nodo_Matriz* getBottom();
    Nodo_Matriz* getRight();
    Nodo_Matriz* getLeft();
    Nodo_Matriz *getDiagTopleft();
    Nodo_Matriz *getDiagTopRight();
    Nodo_Matriz *getDiagBottomleft();
    Nodo_Matriz *getDiagBottomRight();
    int getX();
    int getY();
    void setFlag(bool value);
    /**
     * @brief Modifica el nodo arriba
     * @param referencia a un Nodo_Matriz
     */
    void setTop(Nodo_Matriz* nodo);
    /**
     * @brief Modifica el nodo abajo
     * @param referencia a un Nodo_Matriz
     */
    void setBottom(Nodo_Matriz* nodo);
    /**
     * @brief Modifica el nodo derecho
     * @param referencia a un Nodo_Matriz
     */
    void setRight(Nodo_Matriz* nodo);
    /**
     * @brief Modifica el nodo izquierdo
     * @param referencia a un Nodo_Matriz
     */
    void setLeft(Nodo_Matriz* nodo);
    /**
     * @brief Modifica el nodo Diagonal superior izquierdo
     * @param referencia a un Nodo_Matriz
     */
    void setDiagTopleft(Nodo_Matriz *value);
    /**
     * @brief Modifica el nodo diagonal superior derecho
     * @param referencia a un Nodo_Matriz
     */
    void setDiagTopRight(Nodo_Matriz *value);
    /**
     * @brief Modifica el nodo diagonal inferior izquierdo
     * @param referencia a un Nodo_Matriz
     */
    void setDiagBottomleft(Nodo_Matriz *value);
    /**
     * @brief Modifica el nodo diagonal inferior derecho
     * @param referencia a un Nodo_Matriz
     */
    void setDiagBottomRight(Nodo_Matriz *value);
    /**
     * @brief Modifica el parametro de posicion x
     * @param int
     */
    void setX(int value);
    /**
     * @brief Modifica el parametro de posicion y
     * @param int
     */
    void setY(int value);
    Nodo_Matriz *getParent() const;
    void setParent(Nodo_Matriz *value);
    float getH() const;
    void setH(Nodo_Matriz* nodo);
    float getG() const;
    void setG(float value);
    float getF() const;
    void setF();
    void setF(float num);
    bool getVisited() const;
    void setVisited(bool value);

};


#endif //GLADIADORESSERVER_NODO_MATRIZ_H
