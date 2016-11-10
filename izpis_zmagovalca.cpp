#include "izpis_zmagovalca.h"
#include "ui_izpis_zmagovalca.h"
#include "izpis_neodloceno.h"
#include "ui_izpis_neodloceno.h"
#include "glavnookno.h"
#include "ui_glavnookno.h"
#include "zacetnookno.h"
#include "ui_zacetnookno.h"

Izpis_zmagovalca::Izpis_zmagovalca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Izpis_zmagovalca)
{
    ui->setupUi(this);
}

Izpis_zmagovalca::~Izpis_zmagovalca()
{
    delete ui;
}

void Izpis_zmagovalca::on_btnIzhod_clicked()
{

}

void Izpis_zmagovalca::on_btnNova_clicked()
{

}
