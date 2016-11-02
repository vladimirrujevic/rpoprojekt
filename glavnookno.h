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
  void on_actionZapri_triggered();

  void on_actionZa_ni_igro_triggered();

  void on_actionZacni_igro_triggered();

  void on_btnZacni_clicked();

  void on_btnZapri_clicked();

private:
  Ui::glavnookno *ui;
};

#endif // GLAVNOOKNO_H
