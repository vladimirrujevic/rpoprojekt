#include "clickhandler.h"

ClickHandler::ClickHandler(QObject *parent) : QObject(parent)
{

}

bool ClickHandler::eventFilter(QObject *obj, QEvent *event){
  int i = 0, x = 0, y = 0, xs = 0, ys = 0;
  if(event->type() == QEvent::MouseButtonRelease){
    QGridLayout *g = (QGridLayout*)obj->parent();
    i = g->indexOf((QWidget *)obj);
    g->getItemPosition(i, &x, &y, &xs, &ys);
    return true;
  } else {
    return QObject::eventFilter(obj, event);
  }
}
