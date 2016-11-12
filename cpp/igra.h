#ifndef IGRA_H
#define IGRA_H
#include "igralec.h"
#include<QMessageBox>

class Igra
{
private:
  Igralec *i1, *i2;
  int** polje;
public:
  Igra();
  Igra(Igralec *i1, Igralec *i2);
  int** getPolje();
  int potez(int x, int y, int i);
};

#endif // IGRA_H
