// Class EmpleadoComision member-function definitions.
#include <iostream>
#include <stdexcept>
#include "EmpleadoComision.h" // EmpleadoComision class definition

// constructor
EmpleadoComision::EmpleadoComision(const string &first, const string &last, const string &ssn, double sales, double rate )
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
   setGrossSales( sales ); // validate and store gross sales
   setCommissionRate( rate ); // validate and store commission rate
} // end EmpleadoComision constructor

// set first name
void EmpleadoComision::setFirstName( const string &first )
{
   firstName = first; // should validate
} // end function setFirstName

// return first name
string EmpleadoComision::getFirstName() const
{
   return firstName;
} // end function getFirstName

// set last name
void EmpleadoComision::setLastName( const string &last )
{
   lastName = last; // should validate
} // end function setLastName

// return last name
string EmpleadoComision::getLastName() const
{
   return lastName;
} // end function getLastName

// set social security number
void EmpleadoComision::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber

// return social security number
string EmpleadoComision::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
} // end function getSocialSecurityNumber

// set gross sales amount
void EmpleadoComision::setGrossSales( double sales )
{
   if ( sales >= 0.0 )
      grossSales = sales;
   else
      throw invalid_argument( "Gross sales must be >= 0.0" );
} // end function setGrossSales

// return gross sales amount
double EmpleadoComision::getGrossSales() const
{
   return grossSales;
} // end function getGrossSales

// set commission rate
void EmpleadoComision::setCommissionRate( double rate )
{
   if ( rate > 0.0 && rate < 1.0 )
      commissionRate = rate;
   else
      throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
} // end function setCommissionRate

// return commission rate
double EmpleadoComision::getCommissionRate() const
{
   return commissionRate;
} // end function getCommissionRate

// calculate earnings
double EmpleadoComision::earnings() const
{
   return getCommissionRate() * getGrossSales();
} // end function earnings

// print EmpleadoComision object
void EmpleadoComision::print() const
{
   cout << "commission employee: " 
      << getFirstName() << ' ' << getLastName() 
      << "\nsocial security number: " << getSocialSecurityNumber() 
      << "\ngross sales: " << getGrossSales() 
      << "\ncommission rate: " << getCommissionRate();
} // end function print

