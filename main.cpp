#include "glavnookno.h"
#include "zacetnookno.h"
#include "vnosimena1.h"
#include "vnosimena2.h"
#include "ui_zacetnookno.h"
#include "ui_vnosimena1.h"
#include "ui_vnosimena2.h"
#include "ui_glavnookno.h"
#include <string>
#include <QApplication>

int main(int argc, char *argv[])
{
  using namespace std;
  QApplication a(argc, argv);
  //glavnookno w;

  Ui_glavnookno w;
  Ui_vnosImena1 vi1;
  Ui_vnosImena2 vi2;
 // w.setVisible(false);
  QDialog* d = new QDialog(0,0);
  Ui_ZacetnoOkno zUi;
  zUi.setupUi(d);
  int s = d->exec(), st = 0;
  if(s == QDialog::Rejected){
   // w.close();
    a.exit(0);
  } else if (s == QDialog::Accepted){
    QDialog* e = new QDialog(0,0);
    vi1.setupUi(e);
    int t = e->exec();

    if(t == QDialog::Rejected){
    } else if(t == QDialog::Accepted){
        QDialog* f = new QDialog(0,0);
        vi2.setupUi(f);
        int u = f->exec();
        if(u == QDialog::Rejected){

        } else if(u == QDialog::Accepted){
            QMainWindow* g = new QMainWindow(0,0);
            QString a = vi1.ImeIgralca1->toPlainText();
            QString b = vi2.ImeIgralca2->toPlainText();
            w.setupUi(g);
            //w.ime1->text=a;
            //w.ime2->text=b;
            g->show();
            //w.show();
            //w.start();
          }
    }
    //w.show();
    //w.start();
    st = a.exec();
  }
  return st;
}
