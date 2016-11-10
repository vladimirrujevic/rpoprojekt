#include "glavnookno.h"
#include "zacetnookno.h"
#include "ui_zacetnookno.h"
#include "izpis_neodloceno.h"
#include "ui_izpis_neodloceno.h"
#include "izpis_zmagovalca.h"
#include "ui_izpis_zmagovalca.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  glavnookno w;
  w.setVisible(false);
  QDialog* d = new QDialog(0,0);
  Ui_ZacetnoOkno zUi;
  zUi.setupUi(d);
  int s = d->exec(), st = 0;
  if(s == QDialog::Rejected){
    w.close();
    a.exit(0);
  } else if (s == QDialog::Accepted){
    w.show();
    w.start();
    st = a.exec();
  }
  return st;
}
