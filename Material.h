#ifndef Material_h
#define Material_h
#include <iostream>
using namespace std;

class Material
{
  protected:
  int iIDmaterial;
  string sTitulo;

  public:
  Material();
  Material(int, string);
  int getID();
  string getTitulo();
  void setID(int);
  void setTitulo(string);
  virtual void muestraDatos() = 0;
  virtual int cantidadDeDiasDePrestamo() = 0;

};

Material::Material()
{
  iIDmaterial = -1;
  sTitulo = "N/A";
}

Material::Material(int iI, string sT)
{
  iIDmaterial = iI;
  sTitulo = sT;
}

int Material::getID()
{
  return iIDmaterial;
}

string Material::getTitulo()
{
  return sTitulo;
}

void Material::setID(int iI)
{
  iIDmaterial = iI;
}

void Material::setTitulo(string sT)
{
  sTitulo = sT;
}

#endif
