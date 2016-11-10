#include "izpis_neodloceno.h"
#include "ui_izpis_neodloceno.h"
#include "glavnookno.h"
#include "ui_glavnookno.h"
#include "zacetnookno.h"
#include "ui_zacetnookno.h"
#include "izpis_zmagovalca.h"
#include "ui_izpis_zmagovalca.h"

izpis_neodloceno::izpis_neodloceno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::izpis_neodloceno)
{
    ui->setupUi(this);
}

izpis_neodloceno::~izpis_neodloceno()
{
    delete ui;
}

void izpis_neodloceno::on_btnIzhod2_clicked()
{

}

void izpis_neodloceno::on_btnNova2_clicked()
{

}
