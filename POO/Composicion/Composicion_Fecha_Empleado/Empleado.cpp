#include "Empleado.h"

// output Empleado object to show when its destructor is called
Empleado::~Empleado()
{ 
   cout << "Empleado object destructor: " 
      << apellido << ", " << Nombre << endl;
} // end ~Empleado destructor


// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Empleado::Empleado( const string &nombre, const string &apellido,
   const Fecha &FechaNacimiento, const Fecha &FechaContratacion )
   : Nombre( nombre ), // initialize Nombre
     apellido( apellido ), // initialize apellido
     nacimientoFecha( FechaNacimiento ), // initialize nacimientoFecha
     contratacionFecha( FechaContratacion ) // initialize contratacionFecha
{
   // output Empleado object to show when constructor is called
   cout << "Empleado object constructor: " 
      << Nombre << ' ' << apellido << endl;
} // end Empleado constructor


// imprimir Empleado object
void Empleado::imprimir() const
{
   cout << apellido << ", " << Nombre << "  Contratado: ";
   cout<<contratacionFecha;
   cout << "  Fecha de Nacimiento ";
   cout<<nacimientoFecha;
   cout << endl;
} // end function imprimir

