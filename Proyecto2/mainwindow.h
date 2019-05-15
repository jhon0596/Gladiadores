#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QLabel"
#include "clienthandler.h"
#include "ventanageneraciones.h"

namespace Ui {
class MainWindow;
}

class VentanaGeneraciones;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void addTorre(int pos,int tipo);
    QString getTorre(int caso);
    clientHandler cl;
    void leerXML();
    void mover1(int casillaActual, int casillaSiguiente);
        /**
         * @brief moverGladiador1Abajo
         * @param x
         * @param y
         */
        void moverGladiador1Abajo( int x, int y);
        /**
         * @brief moverGladiador1Arriba
         * @param x
         * @param y
         */
        void moverGladiador1Arriba(int x, int y);
        /**
         * @brief moverGladiador1Derecha
         * @param x
         * @param y
         */
        void moverGladiador1Derecha(int x, int y);
        /**
         * @brief moverGladiador1Izquierda
         * @param x
         * @param y
         */
        void moverGladiador1Izquierda(int x, int y);
        /**
         * @brief mover2
         * @param casillaActual
         * @param casillaSiguiente
         */
        void mover2(int casillaActual, int casillaSiguiente);
        /**
         * @brief moverGladiador2Abajo
         * @param x
         * @param y
         */
        void moverGladiador2Abajo( int x, int y);
        /**
         * @brief moverGladiador2Arriba
         * @param x
         * @param y
         */
        void moverGladiador2Arriba(int x, int y);
        /**
         * @brief moverGladiador2Derecha
         * @param x
         * @param y
         */
        void moverGladiador2Derecha(int x, int y);
        /**
         * @brief moverGladiador2Izquierda
         * @param x
         * @param y
         */
        void moverGladiador2Izquierda(int x, int y);
        /**
         * @brief atacarTorreFuegoAG1
         * @param casillaTorre
         * @param casillaGladiador
         */
        void atacarTorreFuegoAG1(int casillaTorre, int casillaGladiador);
        /**
         * @brief atacarTorreSencillaAG1
         * @param casillaTorre
         * @param casillaGladiador
         */
        void atacarTorreSencillaAG1(int casillaTorre, int casillaGladiador);
        /**
         * @brief atacarTorreExplosivaAG1
         * @param casillaTorre
         * @param casillaGladiador
         */
        void atacarTorreExplosivaAG1(int casillaTorre, int casillaGladiador);
        /**
         * @brief atacarTorreFuegoAG2
         * @param casillaTorre
         * @param casillaGladiador
         */
        void atacarTorreFuegoAG2(int casillaTorre, int casillaGladiador);
        /**
         * @brief atacarTorreSencillaAG2
         * @param casillaTorre
         * @param casillaGladiador
         */
        void atacarTorreSencillaAG2(int casillaTorre, int casillaGladiador);
        /**
         * @brief atacarTorreExplosivaAG2
         * @param casillaTorre
         * @param casillaGladiador
         */
        void atacarTorreExplosivaAG2(int casillaTorre, int casillaGladiador);
        /**
         * @brief atacar
         * @param gladiador
         * @param torre
         * @param casillaTorre
         * @param casillaGladiador
         */
        void atacar(QString gladiador, QString torre, int casillaTorre, int casillaGladiador);

private slots:
    void on_crearmat_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    void fillMat();
    VentanaGeneraciones* generaciones;
};

#endif // MAINWINDOW_H
