#ifndef VENTANAGENERACIONES_H
#define VENTANAGENERACIONES_H

#include <QMainWindow>

namespace Ui {
class VentanaGeneraciones;
}

class VentanaGeneraciones : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaGeneraciones(QWidget *parent = nullptr);
    ~VentanaGeneraciones();

private:
    Ui::VentanaGeneraciones *ui;
};

#endif // VENTANAGENERACIONES_H
