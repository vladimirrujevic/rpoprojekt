#ifndef GLAVNOOKNO_H
#define GLAVNOOKNO_H

#include <QMainWindow>
#include <QMessageBox>
//Includes for game logic
#include "cpp/igra.h"
//handler
#include <QEvent>
#include "cpp/clickhandler.h"

namespace Ui {
  class glavnookno;
}

class glavnookno : public QMainWindow
{
  Q_OBJECT

public:
  explicit glavnookno(QWidget *parent = 0);
  void vnosImen();
  void zmagovalec(int);
  void setPolje(int x, int y, int i);
  void potez(int x, int y);
  void updateUi();
  ~glavnookno();

private slots:

public slots:
  void start();
private:
  Ui::glavnookno *ui;
  Igra *igra;
  Igralec *i1, *i2;
  ClickHandler *ch = new ClickHandler();
};

#endif // GLAVNOOKNO_H
