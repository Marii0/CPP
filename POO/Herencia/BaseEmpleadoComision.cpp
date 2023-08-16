// Class BaseEmpleadoComision member-function definitions.
#include <iostream>
#include <stdexcept>
#include "BaseEmpleadoComision.h"
using namespace std;

// constructor
BaseEmpleadoComision::BaseEmpleadoComision(const string &first, const string &last, const string &ssn, double sales, double rate, double salary ) 
   // explicitly call base-class constructor
   : EmpleadoComision( first, last, ssn, sales, rate )
{
   setSalarioBase( salary ); // validate and store base salary
} // end BaseEmpleadoComision constructor

// set base salary
void BaseEmpleadoComision::setSalarioBase( double salary )
{
   if ( salary >= 0.0 )                                        
      baseSalary = salary;                                     
   else                                                        
      throw invalid_argument( "Salary must be >= 0.0" ); //es igual que un cout para imprimir errores   
} // end function setSalarioBase

// return base salary
double BaseEmpleadoComision::getSalarioBase() const
{
   return baseSalary;
} // end function getSalarioBase

// calculate earnings
double BaseEmpleadoComision::earnings() const
{
   return getSalarioBase() + EmpleadoComision::earnings();
} // end function earnings

// print BaseEmpleadoComision object
void BaseEmpleadoComision::print() const
{
   cout << "base-salaried ";

   // invoke EmpleadoComision's print function
   EmpleadoComision::print();                 
   
   cout << "\nbase salary: " << getSalarioBase();
} // end function print

