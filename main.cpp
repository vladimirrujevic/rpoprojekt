#include "glavnookno.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  glavnookno w;
  w.show();

  return a.exec();
}
