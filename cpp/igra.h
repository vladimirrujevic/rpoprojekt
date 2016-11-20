#ifndef IGRA_H
#define IGRA_H
#include "igralec.h"
#include<QMessageBox>
//razred igra neodvisten od grafičnega vmesnika
//#include "glavnookno.h" je problem ker je glavnookno vključeno v igro pred da je definirano
//in igra.h vključen v glavnookno pred da je definiran - paradoks

class Igra
{
private:
  Igralec *i1, *i2, *naVrsti;
  int** polje;
  bool l;
public:
  Igra();
  Igra(Igralec *i1, Igralec *i2);
  int** getPolje();
  Igralec *getNaVrsti();
  void lock();
  bool locked();
  int *potez(int y, int p);
  bool preveriNeodloceno();
  bool preveriZmaga(int x, int y, int p);
  /*bool preveriVodoravno(int x, int y, int p);
  void preveriNavpicno(int y, int p);
  void preveriDiagonalo1(int y, int p);
  void preveriDiagonalo2(int y, int p);*/
};

#endif // IGRA_H
