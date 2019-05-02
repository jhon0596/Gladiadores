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
    void addTorre();
    QString getTorre(int caso);
    clientHandler cl;


private slots:
    void on_crearmat_clicked();

private:
    Ui::MainWindow *ui;
    void fillMat();
};

#endif // MAINWINDOW_H
