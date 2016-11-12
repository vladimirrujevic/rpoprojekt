#ifndef GLAVNOOKNO_H
#define GLAVNOOKNO_H

#include <QMainWindow>
#include <QMessageBox>

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
  ~glavnookno();

private slots:

public slots:
  void start();
private:
  Ui::glavnookno *ui;
};

#endif // GLAVNOOKNO_H
