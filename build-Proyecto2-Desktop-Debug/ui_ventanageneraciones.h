/********************************************************************************
** Form generated from reading UI file 'ventanageneraciones.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAGENERACIONES_H
#define UI_VENTANAGENERACIONES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaGeneraciones
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VentanaGeneraciones)
    {
        if (VentanaGeneraciones->objectName().isEmpty())
            VentanaGeneraciones->setObjectName(QString::fromUtf8("VentanaGeneraciones"));
        VentanaGeneraciones->resize(800, 600);
        centralwidget = new QWidget(VentanaGeneraciones);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(100, 80, 600, 400));
        VentanaGeneraciones->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VentanaGeneraciones);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        VentanaGeneraciones->setMenuBar(menubar);
        statusbar = new QStatusBar(VentanaGeneraciones);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VentanaGeneraciones->setStatusBar(statusbar);

        retranslateUi(VentanaGeneraciones);

        QMetaObject::connectSlotsByName(VentanaGeneraciones);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaGeneraciones)
    {
        VentanaGeneraciones->setWindowTitle(QApplication::translate("VentanaGeneraciones", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaGeneraciones: public Ui_VentanaGeneraciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAGENERACIONES_H
