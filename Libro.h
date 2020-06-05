#ifndef Libro_h
#define Libro_h
#include <iostream>
using namespace std;

class Libro: public Material
{
  private:
  int iNumPag;
  string sAutor;

  public:
  Libro();
  Libro(int, string, int, string);
  int getNumPag();
  string getAutor();
  void setNumPag(int);
  void setAutor(string);
  int getID();
  string getTitulo();
  void setID(int);
  void setTitulo(string);
  void muestraDatos();
  int cantidadDeDiasDePrestamo();
};

Libro::Libro(): Material()
{
  iNumPag = -1;
  sAutor = "N/A";
}

Libro::Libro(int iI, string sT, int iN, string sA): Material(iI, sT)
{
  iNumPag = iN;
  sAutor = sA;
}

int Libro::getNumPag()
{
  return iNumPag;
}

string Libro::getAutor()
{
  return sAutor;
}

int Libro::getID()
{
  return iIDmaterial;
}

string Libro::getTitulo()
{
  return sTitulo;
}

void Libro::setNumPag(int iN)
{
  iNumPag = iN;
}

void Libro::setAutor(string sA)
{
  sAutor = sA;
}

void Libro::setID(int iI)
{
  iIDmaterial = iI;
}

void Libro::setTitulo(string sT)
{
  sTitulo = sT;
}

int Libro::cantidadDeDiasDePrestamo()
{
  return 7;
}

void Libro::muestraDatos()
{ 
  cout << "ID: " << iIDmaterial << endl;
  cout << "Material: Libro" << endl;
  cout << "Título: " << sTitulo << endl;
  cout << "Autor: " << sAutor << endl;
  cout << "Número de Páginas: " << iNumPag << endl;
}

#endif
