#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QLabel"
#include "clienthandler.h"
namespace Ui {
class MainWindow;
}

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
        void moverGladiador1Abajo( int x, int y);
        void moverGladiador1Arriba(int x, int y);
        void moverGladiador1Derecha(int x, int y);
        void moverGladiador1Izquierda(int x, int y);
        void mover2(int casillaActual, int casillaSiguiente);
        void moverGladiador2Abajo( int x, int y);
        void moverGladiador2Arriba(int x, int y);
        void moverGladiador2Derecha(int x, int y);
        void moverGladiador2Izquierda(int x, int y);

private slots:
    void on_crearmat_clicked();

private:
    Ui::MainWindow *ui;
    void fillMat();
};

#endif // MAINWINDOW_H
