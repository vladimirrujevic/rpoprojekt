#include "zacetnookno.h"
#include "ui_zacetnookno.h"
#include "izpis_zmagovalca.h"
#include "ui_izpis_zmagovalca.h"
#include "izpis_neodloceno.h"
#include "ui_izpis_neodloceno.h"
#include "glavnookno.h"
#include "ui_glavnookno.h"

ZacetnoOkno::ZacetnoOkno(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ZacetnoOkno)
{
  ui->setupUi(this);
}

ZacetnoOkno::~ZacetnoOkno()
{
  delete ui;
}
