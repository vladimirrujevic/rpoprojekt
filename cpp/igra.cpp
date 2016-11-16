#include "igra.h"

Igra::Igra(): i1(NULL), i2(NULL), polje(NULL), naVrsti(NULL){}
Igra::Igra(Igralec *i1, Igralec *i2){
  this->i1 = i1;
  this->i2 = i2;
  this->naVrsti = i1;
  polje = new int*[6];
  for(int i = 0; i<5; i++){
    polje[i] = new int[7];
  }
  for(int i = 0; i<5; i++)
    for(int j = 0; j<7; j++)
      polje[i][j] = 0;
}

int** Igra::getPolje(){
  return polje;
}

Igralec* Igra::getNaVrsti(){
  return naVrsti;
}

int Igra::potez(int y, int p){
  if(p == i1->getSt())
    naVrsti = i2;
  else
    naVrsti = i1;
  if(polje[0][y] != 0)
    return -1;
  else{
    for(int i = 4; i>=0; i--)
      if(polje[i][y] == 0){
        polje[i][y] = p;
        return i;
      }
  }
  return 0;
}
