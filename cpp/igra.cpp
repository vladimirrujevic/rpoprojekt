#include "igra.h"

Igra::Igra(): i1(NULL), i2(NULL), polje(NULL){}
Igra::Igra(Igralec *i1, Igralec *i2){
  this->i1 = i1;
  this->i2 = i2;
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

int Igra::potez(int x, int y, int i){
  if(polje[x][y] != 0)
    return -1;
  else
    polje[x][y] = i;
  return 0;
}
