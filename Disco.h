#ifndef Disco_h
#define Disco_h
#include <iostream>
#include "Material.h"
using namespace std;

class Disco: public Material
{
  private:
  int iDuracion;

  public:
  Disco();
  Disco(int, string, int);
  int getDuracion();
  void setDuracion(int);
  int getID();
  string getTitulo();
  void setID(int);
  void setTitulo(string);
  void muestraDatos();
  int cantidadDeDiasDePrestamo();
};

Disco::Disco():Material()
{
  iDuracion = -1;
}

Disco::Disco(int iI, string sT, int iD): Material(iI, sT)
{
  iDuracion = iD;
}

int Disco::getDuracion()
{
  return iDuracion;
}

string Disco::getTitulo()
{
  return sTitulo;
}

int Disco::getID()
{
  return iIDmaterial;
}

void Disco::setDuracion(int iD)
{
  iDuracion = iD;
}

void Disco::setTitulo(string sT)
{
  sTitulo = sT;
}

void Disco::setID(int iI)
{
  iIDmaterial = iI;
}

int Disco::cantidadDeDiasDePrestamo()
{
  return 2;
}

void Disco::muestraDatos()
{ 
  cout << "ID: " << iIDmaterial << endl;
  cout << "Material: Disco" << endl;
  cout << "Título: " << sTitulo << endl;
  cout << "Duración: " << iDuracion << " minutos" << endl;
}

#endif
