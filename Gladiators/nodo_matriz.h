#ifndef NODO_MATRIZ_H
#define NODO_MATRIZ_H

#include <string>
/**
 * @brief The Nodo_Matriz class, es un nodo enlazado en 8 direcciones, arriba, abajo, izquierda
 * derecha y sus respectivas diagonales.
 */
class Nodo_Matriz
{
    private:
        int x;
        int y;
        bool flag;
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
};

#endif // NODO_MATRIZ_H
