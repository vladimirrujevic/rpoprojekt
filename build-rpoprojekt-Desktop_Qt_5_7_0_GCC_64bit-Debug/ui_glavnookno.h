/********************************************************************************
** Form generated from reading UI file 'glavnookno.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLAVNOOKNO_H
#define UI_GLAVNOOKNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_glavnookno
{
public:
    QAction *actionZapri;
    QAction *actionZacni_igro;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menu_tiri_v_vrsto;

    void setupUi(QMainWindow *glavnookno)
    {
        if (glavnookno->objectName().isEmpty())
            glavnookno->setObjectName(QStringLiteral("glavnookno"));
        glavnookno->resize(456, 345);
        glavnookno->setAcceptDrops(false);
        actionZapri = new QAction(glavnookno);
        actionZapri->setObjectName(QStringLiteral("actionZapri"));
        actionZacni_igro = new QAction(glavnookno);
        actionZacni_igro->setObjectName(QStringLiteral("actionZacni_igro"));
        centralWidget = new QWidget(glavnookno);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        glavnookno->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(glavnookno);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 456, 19));
        menu_tiri_v_vrsto = new QMenu(menuBar);
        menu_tiri_v_vrsto->setObjectName(QStringLiteral("menu_tiri_v_vrsto"));
        glavnookno->setMenuBar(menuBar);

        menuBar->addAction(menu_tiri_v_vrsto->menuAction());
        menu_tiri_v_vrsto->addAction(actionZacni_igro);
        menu_tiri_v_vrsto->addAction(actionZapri);

        retranslateUi(glavnookno);
        QObject::connect(actionZapri, SIGNAL(triggered()), glavnookno, SLOT(close()));

        QMetaObject::connectSlotsByName(glavnookno);
    } // setupUi

    void retranslateUi(QMainWindow *glavnookno)
    {
        glavnookno->setWindowTitle(QApplication::translate("glavnookno", "\305\240tiri v vrsto", 0));
        actionZapri->setText(QApplication::translate("glavnookno", "Zapri", 0));
        actionZapri->setShortcut(QApplication::translate("glavnookno", "Ctrl+Q", 0));
        actionZacni_igro->setText(QApplication::translate("glavnookno", "Nova igra", 0));
        actionZacni_igro->setShortcut(QApplication::translate("glavnookno", "Ctrl+N", 0));
        menu_tiri_v_vrsto->setTitle(QApplication::translate("glavnookno", "\305\240tiri v vrsto", 0));
    } // retranslateUi

};

namespace Ui {
    class glavnookno: public Ui_glavnookno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLAVNOOKNO_H
