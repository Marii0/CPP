#include "Fecha.cpp"
#ifndef EMPLEADO_H
#define EMPLEADO_H
class Empleado
{
public:
   Empleado(const string &, const string &,const Fecha &,const Fecha & );
   void imprimir() const;
   ~Empleado(); // provided to confirm destruction order
private:
   string Nombre; // composition: member object
   string apellido; // composition: member object
   const Fecha nacimientoFecha; // composition: member object
   const Fecha contratacionFecha; // composition: member object
}; // end class Empleado

#endif