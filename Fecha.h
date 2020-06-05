#ifndef Fecha_h
#define Fecha_h
#include <iostream>
using namespace std;

class Fecha
{
  private:
  int iDD;
  int iMM;
  int iAA;

  public:
  Fecha();
  Fecha(int, int, int);
  int getDD();
  int getMM();
  int getAA();
  void setFecha(int, int, int);
  Fecha operator+ (int);
  bool operator> (Fecha);
  bool operator< (Fecha);
  bool operator>= (Fecha);
  bool operator<= (Fecha);
  bool operator== (Fecha);
  friend istream& operator>> (istream &, Fecha &);
  friend ostream& operator<< (ostream &, Fecha &);
  bool esBisiesto();
};

Fecha::Fecha()
{
  iDD = 0;
  iMM = 0;
  iAA = 0;
}

Fecha::Fecha(int iD, int iM, int iA)
{
  iDD = iD;
  iMM = iM;
  iAA = iA;
}

int Fecha::getDD()
{
  return iDD;
}

int Fecha::getMM()
{
  return iMM;
}

int Fecha::getAA()
{
  return iAA;
}

void Fecha::setFecha(int iD, int iM, int iA)
{
  iDD = iD;
  iMM = iM;
  iAA = iA;
}

Fecha Fecha::operator+(int iD)
{
  int iDia = iDD + iD;
  int iMes = iMM;
  int iAnio = iAA;

  while(((iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes == 8 || iMes == 10 || iMes == 12) && iDia > 31) || ((iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11) && iDia > 30) || ((iMes == 2) && (iAnio % 4 == 0) && iDia > 29) || ((iMes == 2) && (iAnio % 4 != 0) && iDia > 28))
  {
    if((iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes == 8 || iMes == 10 || iMes == 12) && iDia > 31)
    {
     iDia = iDia - 31;
     iMes++;
    }
    else if((iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11) && iDia > 30)
    {
      iDia = iDia - 30;
      iMes++;
    }
    else if((iMes == 2) && (iAnio % 4 == 0) && iDia > 29)
    {
      iDia = iDia - 29;
      iMes++;
    }
    else if((iMes == 2) && (iAnio % 4 != 0) && iDia > 28)
    {
      iDia = iDia - 28;
      iMes++;
    }

    if(iMes == 13){
      iMes = 1;
      iAnio++;
    }
  }
  Fecha FechaF(iDia, iMes, iAnio);
  return FechaF;
}

bool Fecha::operator>=(Fecha Fecha)
{
  if(iAA > Fecha.iAA)
  {
    return true;
  }
  else if(iAA == Fecha.iAA)
  {
    if(iMM > Fecha.iMM)
    {
      return true;
    }
    else if(iMM == Fecha.iMM)
    {
      if(iDD > Fecha.iDD)
      {
        return true;
      }
      else if(iDD == Fecha.iDD)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }
  }
  else
  {
    return false;
  }
}

bool Fecha::operator<=(Fecha Fecha)
{
  if(iAA < Fecha.iAA)
  {
    return true;
  }
  else if(iAA == Fecha.iAA)
  {
    if(iMM < Fecha.iMM)
    {
      return true;
    }
    else if(iMM == Fecha.iMM)
    {
      if(iDD < Fecha.iDD)
      {
        return true;
      }
      else if(iDD == Fecha.iDD)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }
  }
  else
  {
    return false;
  }
}

bool Fecha::operator>(Fecha Fecha)
{
  if(iAA > Fecha.iAA)
  {
    return true;
  }
  else if(iAA == Fecha.iAA)
  {
    if(iMM > Fecha.iMM)
    {
      return true;
    }
    else if(iMM == Fecha.iMM)
    {
      if(iDD > Fecha.iDD)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }
  }
  else
  {
    return false;
  }
}

bool Fecha::operator<(Fecha Fecha)
{
  if(iAA < Fecha.iAA)
  {
    return true;
  }
  else if(iAA == Fecha.iAA)
  {
    if(iMM < Fecha.iMM)
    {
      return true;
    }
    else if(iMM == Fecha.iMM)
    {
      if(iDD < Fecha.iDD)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
    else
    {
      return false;
    }
  }
  else
  {
    return false;
  }
}

bool Fecha::operator==(Fecha Fecha)
{
  if((iAA > Fecha.iAA) && (iMM == Fecha.iMM) && (iDD == Fecha.iDD))
  {
    return true;
  }
  else
  {
    return false;
  }
}

istream& operator>>(istream &iS, Fecha &Fecha)
{
  cout << "Día: ";
  iS >> Fecha.iDD;

  cout << "Mes: ";
  iS >> Fecha.iMM;

  cout << "Año: ";
  iS >> Fecha.iAA;

  return iS;
}

ostream& operator<<(ostream &oS, Fecha &Fecha)
{
  if(Fecha.iDD < 10)
  {
    oS << "0";
  }

  oS << Fecha.iDD << "/";

  if(Fecha.iMM == 1)
  {
    oS << "Ene/";
  }
  if(Fecha.iMM == 2)
  {
    oS << "Feb/";
  }
  if(Fecha.iMM == 3)
  {
    oS << "Mar/";
  }
  if(Fecha.iMM == 4)
  {
    oS << "Abr/";
  }
  if(Fecha.iMM == 5)
  {
    oS << "May/";
  }
  if(Fecha.iMM == 6)
  {
    oS << "Jun/";
  }
  if(Fecha.iMM == 7)
  {
    oS << "Jul/";
  }
  if(Fecha.iMM == 8)
  {
    oS << "Ago/";
  }
  if(Fecha.iMM == 9)
  {
    oS << "Sep/";
  }
  if(Fecha.iMM == 10)
  {
    oS << "Oct/";
  }
  if(Fecha.iMM == 11)
  {
    oS << "Nov/";
  }
  if(Fecha.iMM == 12)
  {
    oS << "Dic/";
  }

  oS << Fecha.iAA;

  return oS;
}

bool Fecha::esBisiesto()
{
  if(iAA % 4 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

#endif
