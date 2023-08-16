#include <iostream>
#include <string>
//#include <array>

using namespace std;

class Fecha
{
public:       
   friend ostream &operator<<(ostream &, const Fecha & );
   Fecha( int=1, int=1, int=1900 ); // default constructor
   void setFecha( int, int, int ); // set mes, dia, anio
   Fecha &operator++(); // prefix increment operator
   Fecha operator++( int ); // postfix increment operator
   Fecha &operator+=( unsigned int ); // add dias, modify object
   static bool esBisiesto( int ); // is date in a leap anio?
   bool finMes( int ) const; // is date at the end of mes?
private:
   unsigned int mes;
   unsigned int dia;
   unsigned int anio;
  const int dias[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};


   void ayudaIncremento(); 
}; // end class Fecha