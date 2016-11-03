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
  ~glavnookno();

private slots:
  void on_actionZacni_igro_triggered();

  void onBtnStart();
private:
  Ui::glavnookno *ui;
};

#endif // GLAVNOOKNO_H
