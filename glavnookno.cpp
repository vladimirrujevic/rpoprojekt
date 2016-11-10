#include "glavnookno.h"
#include "ui_glavnookno.h"
#include "zacetnookno.h"
#include "ui_zacetnookno.h"

glavnookno::glavnookno(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::glavnookno)
{
  ui->setupUi(this);
  connect(ui->actionZacni_igro, SIGNAL(triggered()), this, SLOT(start()));
}

glavnookno::~glavnookno()
{
  delete ui;
}

void glavnookno::start(){
  QMessageBox::about(this, "V razvoju", "To je test");
  //ovde se pokliče funkcija za začetek nove igre
}

void glavnookno::onBtnStart(){
  this->start();
}
