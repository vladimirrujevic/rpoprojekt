#ifndef IGRA_H
#define IGRA_H
#include "igralec.h"
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
  int potez(int y, int p);
};

#endif // IGRA_H
