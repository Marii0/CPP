// Testing class BaseEmpleadoComision.
#include <iostream>
#include <iomanip>
#include "BaseEmpleadoComision.cpp" // class definition
#include "EmpleadoComision.cpp"     // class definition

int main()
{
   // instantiate BaseEmpleadoComision object
   BaseEmpleadoComision empleado("Juan", "Gomez", "334-33-3333", 5000, .04, 300);

   // set floating-point output formatting
   cout << fixed << setprecision(2); // formato puramente estetico...

   // get commission empleado data
   cout << "Informacion del empleado: \n"
        << "\nNombre " << empleado.getFirstName()
        << "\nApellido " << empleado.getLastName()
        << "\nSeguridad Social is " << empleado.getSocialSecurityNumber()
        << "\nVentas Netas " << empleado.getGrossSales()
        << "\nTasa de comision " << empleado.getCommissionRate()
        << "\nSalario Base " << empleado.getSalarioBase() << endl;

   empleado.setSalarioBase(1000); // set base salary

   cout << "\nUpdated empleado information output by print function: \n"
        << endl;
   empleado.print(); // display the new empleado information

   // display the empleado's earnings
   cout << "\n\nEmployee's earnings: $" << empleado.earnings() << endl;
} // end main
