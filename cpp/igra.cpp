#include "igra.h"

Igra::Igra(): i1(NULL), i2(NULL), polje(NULL), naVrsti(NULL), l(false){}
Igra::Igra(Igralec *i1, Igralec *i2){
  this->i1 = i1;
  this->i2 = i2;
  this->naVrsti = i1;
  this->l = false;
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

void Igra::lock(){
  l = !l;
}

bool Igra::locked(){
  return l;
}

//igra je neodločena če je polje polno in ni zmagovalca
bool Igra::preveriNeodloceno(){
  int i = 0;
  for(i = 0; i < 7; i++)
    if(polje[0][i] == 0)
      return false;
  return true;
}

//preverjanje zmagovalca
bool Igra::preveriZmaga(int x, int y, int p){
  int v=0, i = x, j = y;
  bool z = false;
  //vodoravno
  while(i<6 && j<7 && polje[i][j]==p){
    v++;
    j++;
  }
  j = y - 1;
  while(i<6 && j>=0 && polje[i][j]==p){
    v++;
    j--;
  }
  if(v >= 4)
    z = true;
  //navpično
  v = 0, i = x, j = y;
  while(i<6 && j<7 && polje[i][j]==p){
    v++;
    i++;
  }
  i = x - 1;
  while(i>=0 && j<7 && polje[i][j]==p){
    v++;
    i--;
  }
  if(v >= 4)
    z = true;
  //diagonalno 1
  v = 0, i = x, j = y;
  while(i<6 && j<7 && polje[i][j]==p){
    v++;
    i++;
    j++;
  }
  i = x - 1;
  j = y - 1;
  while(i>=0 && j>=0 && polje[i][j]==p){
    v++;
    i--;
    j--;
  }
  if(v >= 4)
    z = true;
  //diagonalno 2
  v = 0, i = x, j = y;
  while(i>=0 && j<7 && polje[i][j]==p){
    v++;
    i--;
    j++;
  }
  i = x + 1;
  j = y - 1;
  while(i<6 && j>=0 && polje[i][j]==p){
    v++;
    i++;
    j--;
  }
  if(v >= 4)
    z = true;

  return z;
}

/*
//preverjanje zmagovalca vodoravno
bool Igra::preveriVodoravno(int y, int p){
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
*/
Igralec* Igra::getNaVrsti(){
  return naVrsti;
}

void Igra::setNaVrsti(Igralec *n){
  naVrsti = n;
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
  if(polje[0][y] != 0)
    ret[0] = -1;
  else{
    while(i>=0){
      if(polje[i][y] == 0){
        polje[i][y] = p;
        /* naslov polja[i][y]
        int* iii=&polje[i][y];
        sklad.push(&polje[i][y]);
        printf("i:%d j:%d %p %p\n",i,y,&polje[i][y],iii);
        printf("%p\n",sklad.top());
        */
        int ii=i;
        int jj=y;
        sklad.push(jj);
        sklad.push(ii);

        ret[1] = i;
        ret[2] = y;
        break;
      }
      i--;
    }
  }
  if(l)
    ret[0] = -1;
  return ret;
}

Igra::~Igra(){
  i1 = NULL;
  i2 = NULL;
  naVrsti = NULL;
  if(polje != NULL){
    for(int i = 0; i < 6; i++)
      delete[] polje[i];
    delete[] polje;
    polje = NULL;
  }
}

int Igra::undo(){
    int a=sklad.top();
    sklad.pop();
    return a;
}

size_t Igra::velikost(){
    return sklad.size();
}
