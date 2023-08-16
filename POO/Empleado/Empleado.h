#include "bits/stdc++.h"
using namespace std;
#ifndef EMPLEADO_H
#define EMPLEADO_H
class Empleado
{
public:
   Empleado(const string &, const string &);
   void imprimir() const;
   ~Empleado(); // provided to confirm destruction order
private:
   string Nombre; // composition: member object
   string apellido; // composition: member object
}; // end class Empleado

#endif