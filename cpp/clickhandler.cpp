#include "clickhandler.h"

ClickHandler::ClickHandler(QObject *parent) : QObject(parent)
{
}

bool ClickHandler::eventFilter(QObject *obj, QEvent *event){
  int i = 0, x = 0, y = 0, xs = 0, ys = 0;
  if(event->type() == QEvent::MouseButtonRelease){
    glavnookno *w = (glavnookno*)this->parent();
    QGridLayout *g = w->igP;
    i = g->indexOf((QWidget *)obj);
    g->getItemPosition(i, &x, &y, &xs, &ys);
    int* addr = w->igra->potez(y-1, w->igra->getNaVrsti()->getSt());
    if(addr[0] == 0)
      w->setPolje(addr[1], addr[2], w->igra->getNaVrsti()->getSt());
    else
      w->ilegalMove();
    return true;
  } else {
    return QObject::eventFilter(obj, event);
  }
}
