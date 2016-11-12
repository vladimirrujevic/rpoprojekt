//main.cpp is automaticaly generated file and should
//not be changed!!
//Authomatic includes
#include "glavnookno.h"
#include <QApplication>
//Includes for start screen
#include "zacetnookno.h"
#include "ui_zacetnookno.h"
//Other includes are just bloating the executable

int main(int argc, char *argv[])
{
  //Create main window and application objects
  //don't touch!
  QApplication a(argc, argv);
  glavnookno w;
  //Hide main window and display start screen
  //Hidden main window for aesthetic purposes
  //don't touch!
  w.setVisible(false);
  //Create, initialize and show start screen
  QDialog* d = new QDialog(0,0);
  Ui_ZacetnoOkno zUi;
  zUi.setupUi(d);
  int s = d->exec(), st = 0;
  if(s == QDialog::Rejected){
    //w.close();
    a.exit(0);//If rejected close application
  } else if (s == QDialog::Accepted){
    w.show();//if accepted, show main window and
    w.start();//start the game
    st = a.exec();
  }
  //Don't touch or rewrite the main.cpp logic unless
  //you know what you are doing!
  return st;
}
