// BaseEmpleadoComision class derived from class 
// EmpleadoComision.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "EmpleadoComision.h" // EmpleadoComision class declaration

class BaseEmpleadoComision : public EmpleadoComision//con esto le decimos a la clase que va a haber herencia y derivamos los atributos...
{
public:
   BaseEmpleadoComision( const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );
   
   void setSalarioBase( double ); // set base salary
   double getSalarioBase() const; // return base salary

   double earnings() const; // calculate ganancias
   void print() const; // print BaseEmpleadoComision object
private:
   double baseSalary; // base salary
}; // end class BaseEmpleadoComision

#endif

