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
  void clearPolje();
  void potez(int x, int y);
  void updateUi();
  void ilegalMove();
  //Q_SLOT void izpiscas();
  Igra *igra;
  QGridLayout *igP;
  QLabel *statusLabel;
  ~glavnookno();

private slots:

public slots:
  void start();
private:
  Ui::glavnookno *ui;

  Igralec *i1, *i2;
  class ClickHandler *ch;
};

#endif // GLAVNOOKNO_H
