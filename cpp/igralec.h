#ifndef IGRALEC_H
#define IGRALEC_H
#include<QString>

class Igralec
{
private:
  int st;
  QString ime;
  int zmage;
public:
  Igralec();
  Igralec(QString ime, int st);
  Igralec(Igralec &c);
  void zmaga();
  int getZmage();
  QString getIme();
};

#endif // IGRALEC_H
