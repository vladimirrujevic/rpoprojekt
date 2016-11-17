#ifndef IGRA_H
#define IGRA_H
#include "igralec.h"
#include "glavnookno.h"
#include<QMessageBox>

class Igra
{
private:
  Igralec *i1, *i2, *naVrsti;
  int** polje;
public:
  Igra();
  Igra(Igralec *i1, Igralec *i2);
  int** getPolje();
  Igralec *getNaVrsti();
  int *potez(int y, int p);
  bool preveriVodoravno(int y, int p);
  bool preveriNavpicno(int y, int p);
  bool preveriDiagonalo1(int y, int p);
  bool preveriDiagonalo2(int y, int p);
};

#endif // IGRA_H
