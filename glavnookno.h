#ifndef GLAVNOOKNO_H
#define GLAVNOOKNO_H

#include <QMainWindow>
#include <QMessageBox>
//Includes for game logic
#include "cpp/igra.h"
//handler
#include <QEvent>
#include "cpp/clickhandler.h"
//includes for UI
#include "ui_izpis_zmagovalca.h"
#include "ui_izpis_neodloceno.h"
#include "ui_vnosimena1.h"
#include "ui_vnosimena2.h"
#include <QString>
#include <QInputDialog>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QTime>
#include <QTimer>

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
  //timer:
  QTimer *timer;
  QTime *cas;
  ~glavnookno();

private slots:

public slots:
  void start();
  void izpiscas();
private:
  Ui::glavnookno *ui;

  Igralec *i1, *i2;
  class ClickHandler *ch;
};

#endif // GLAVNOOKNO_H
