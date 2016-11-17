#include "igra.h"

Igra::Igra(): i1(NULL), i2(NULL), polje(NULL), naVrsti(NULL){}
Igra::Igra(Igralec *i1, Igralec *i2){
  this->i1 = i1;
  this->i2 = i2;
  this->naVrsti = i1;
  polje = new int*[6];
  for(int i = 0; i<6; i++){
    polje[i] = new int[7];
  }
  for(int i = 0; i<6; i++)
    for(int j = 0; j<7; j++)
      polje[i][j] = 0;
}

int** Igra::getPolje(){
  return polje;
}

//preverjanje zmagovalca vodoravno
bool Igra::preveriVodoravno(int y, int p){
    int v;
    if(p==i1->getSt()){
        v = i1->getSt();
    }
    else{
        v = i2->getSt();
    }
    for(int i=0;i<4;i++){
        if(polje[i][y]!=v){
            return false;
        }
        else{
            return true;
        }

    }
}

//preverjanje zmagovalca navpično
bool Igra::preveriNavpicno(int y, int p){
    int v;
    if(p==i1->getSt()){
        v = i1->getSt();
    }
    else{
        v = i2->getSt();
    }
    for(int i=0;i<4;i++){
        if(polje[y][i]!=v){
            return false;
        }
        else{
            return true;
        }

    }
}

//preverjanje zmagovalca po diagonali
bool Igra::preveriDiagonalo1(int y, int p){
    int v;
    if(p==i1->getSt()){
        v = i1->getSt();
    }
    else{
        v = i2->getSt();
    }
    for(int i=0;i<4;i++){
        if(polje[i][y+i]!=v){
            return false;
        }
        else{
            return true;
        }

    }
}

//preverjanje zmagovalca po diagonali
bool Igra::preveriDiagonalo2(int y, int p){
    int v;
    if(p==i1->getSt()){
        v = i1->getSt();
    }
    else{
        v = i2->getSt();
    }
    for(int i=0;i<4;i++){
        if(polje[i][y-i]!=v){
            return false;
        }
        else{
            return true;
        }

    }
}

Igralec* Igra::getNaVrsti(){
  return naVrsti;
}

int* Igra::potez(int y, int p){
  int *ret = new int[3], i = 5;
  ret[0] = 0;
  ret[1] = 0;
  ret[2] = 0;
  if(p == i1->getSt())
    naVrsti = i2;
  else
    naVrsti = i1;
  if(polje[0][y] != 0 ){
    ret[0] = -1;
  }
  else{
    while(i>=0){
    //for(int i = 5; i>=0; i--)
      if(polje[i][y] == 0){
        polje[i][y] = p;
        ret[1] = i;
        ret[2] = y;
        break;
      }
      i--;
    }
  }
  return ret;
}
