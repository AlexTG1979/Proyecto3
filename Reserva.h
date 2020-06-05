#ifndef Reserva_h
#define Reserva_h
#include <iostream>
#include "Fecha.h"
using namespace std;

class Reserva
{
  private:
  int iIDmaterial;
  int iIDcliente;
  Fecha fechaReservacion;

  public:
  Reserva();
  Reserva(int, int, Fecha);
  int getIDmaterial();
  int getIDcliente();
  Fecha getFechaR();
  void setIDmaterial(int);
  void setIDcliente(int);
  void setFechaR(Fecha);
  Fecha calculaFechaFinReserva(int);
  void toString();

};

Reserva::Reserva()
{
  Fecha FechaR(0, 0, 0);
  iIDmaterial = -1;
  iIDcliente = -1;
  fechaReservacion = FechaR;
}

Reserva::Reserva(int iI, int iC, Fecha F)
{
  iIDmaterial = iI;
  iIDcliente = iC;
  fechaReservacion = F;
}

int Reserva::getIDmaterial()
{
  return iIDmaterial;
}

int Reserva::getIDcliente()
{
  return iIDcliente;
}

Fecha Reserva::getFechaR()
{
  return fechaReservacion;
}

void Reserva::setIDmaterial(int iI)
{
  iIDmaterial = iI;
}

void Reserva::setIDcliente(int iC)
{
  iIDcliente = iC;
}

void Reserva::setFechaR(Fecha F)
{
  fechaReservacion = F;
}

Fecha Reserva::calculaFechaFinReserva(int iD)
{
  return (fechaReservacion + iD);
}

void Reserva::toString()
{
  cout << "ID de Material: " << iIDmaterial << endl;
  cout << "ID de Cliente: " << iIDcliente << endl;
  cout << "Fecha: " << fechaReservacion << endl;
}

#endif
