#include "glavnookno.h"
#include "zacetnookno.h"
#include "ui_zacetnookno.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  glavnookno w;
  w.show();
  QDialog* d = new QDialog(0,0);
  Ui_ZacetnoOkno zUi;
  zUi.setupUi(d);
  d->show();
  return a.exec();
}
