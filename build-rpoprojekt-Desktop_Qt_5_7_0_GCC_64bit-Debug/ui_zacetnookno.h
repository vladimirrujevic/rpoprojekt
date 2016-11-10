/********************************************************************************
** Form generated from reading UI file 'zacetnookno.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZACETNOOKNO_H
#define UI_ZACETNOOKNO_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZacetnoOkno
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btnZacni;
    QPushButton *btnZapri;

    void setupUi(QDialog *ZacetnoOkno)
    {
        if (ZacetnoOkno->objectName().isEmpty())
            ZacetnoOkno->setObjectName(QStringLiteral("ZacetnoOkno"));
        ZacetnoOkno->resize(600, 450);
        ZacetnoOkno->setStyleSheet(QStringLiteral("background-image: url(:/slike/SLIKE/Ozadje1.png);"));
        gridLayout = new QGridLayout(ZacetnoOkno);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnZacni = new QPushButton(ZacetnoOkno);
        btnZacni->setObjectName(QStringLiteral("btnZacni"));
        btnZacni->setMinimumSize(QSize(200, 66));
        btnZacni->setMaximumSize(QSize(200, 66));
        btnZacni->setBaseSize(QSize(200, 66));
        btnZacni->setAutoFillBackground(false);
        btnZacni->setStyleSheet(QLatin1String("background-image:url(:/slike/SLIKE/gumb1.png);\n"
"border:none;\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));

        verticalLayout->addWidget(btnZacni);

        btnZapri = new QPushButton(ZacetnoOkno);
        btnZapri->setObjectName(QStringLiteral("btnZapri"));
        btnZapri->setMinimumSize(QSize(200, 66));
        btnZapri->setMaximumSize(QSize(200, 66));
        btnZapri->setBaseSize(QSize(200, 66));
        btnZapri->setStyleSheet(QLatin1String("background-image: url(:/slike/SLIKE/gumb2.png);\n"
"border:none;\n"
"background-color: rgba(255, 255, 255, 0)"));
        btnZapri->setLocale(QLocale(QLocale::Slovenian, QLocale::Slovenia));

        verticalLayout->addWidget(btnZapri);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ZacetnoOkno);
        QObject::connect(btnZacni, SIGNAL(clicked()), ZacetnoOkno, SLOT(accept()));
        QObject::connect(btnZapri, SIGNAL(clicked()), ZacetnoOkno, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZacetnoOkno);
    } // setupUi

    void retranslateUi(QDialog *ZacetnoOkno)
    {
        ZacetnoOkno->setWindowTitle(QApplication::translate("ZacetnoOkno", "Za\304\215etno okno - \305\240tiri v vrsto", 0));
        btnZacni->setText(QString());
        btnZapri->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ZacetnoOkno: public Ui_ZacetnoOkno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZACETNOOKNO_H
