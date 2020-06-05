#ifndef Software_h
#define Software_h
#include <iostream>
#include "Material.h"
using namespace std;

class Software: public Material
{
  private:
  string sSistemaOper;

  public:
  Software();
  Software(int, string, string);
  string getSistema();
  void setSistema(string);
  int getID();
  string getTitulo();
  void setID(int);
  void setTitulo(string);
  void muestraDatos();
  int cantidadDeDiasDePrestamo();
};

Software::Software(): Material()
{
  sSistemaOper = "N/A";
}

Software::Software(int iI, string sT, string sO): Material(iI, sT)
{
  sSistemaOper = sO;
}

string Software::getSistema()
{
  return sSistemaOper;
}

int Software::getID()
{
  return iIDmaterial;
}

string Software::getTitulo()
{
  return sTitulo;
}

void Software::setSistema(string sO)
{
  sSistemaOper = sO;
}

void Software::setID(int iI)
{
  iIDmaterial = iI;
}

void Software::setTitulo(string sT)
{
  sTitulo = sT;
}

int Software::cantidadDeDiasDePrestamo()
{
  return 1;
}

void Software::muestraDatos()
{ 
  cout << "ID: " << iIDmaterial << endl;
  cout << "Material: Software" << endl;
  cout << "Título: " << sTitulo << endl;
  cout << "Sistema Operativo: " << sSistemaOper <<  endl;
}
 
#endif
