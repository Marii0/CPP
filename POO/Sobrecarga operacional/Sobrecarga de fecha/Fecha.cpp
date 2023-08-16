#include "Fecha.h"

Fecha::Fecha(int mm, int dd, int aa)
{
   setFecha(mm, dd, aa);
} // end Fecha constructor

void Fecha::setFecha(int mm, int dd, int yy)
{
   if (mm >= 1 && mm <= 12)
      mes = mm;
   else
      // throw std::invalid_argument( "Month must be 1-12" );
      cout << "error debe ser entre 1-12\n";
   if (yy >= 1900 && yy <= 2100)
      anio = yy;
   else
      //  throw invalid_argument( "Year must be >= 1900 and <= 2100" );
      cout << "error el anio debe ser entre 1900 y 2100\n";

   // test for a leap anio
   if (mes == 2 && esBisiesto(anio) && dd >= 1 && dd <= 29)
      dia = dd;
   else if (mes == 2 && esBisiesto(anio) && dd >= 1 && dd > 29)
      cout << "error Dia fuera de Rango para el mes actual y anio\n";
   else
      dia = dd;
}

Fecha &Fecha::operator++()
{
   ayudaIncremento();
   return *this;
}

Fecha Fecha::operator++(int)
{
   Fecha temp = *this;
   ayudaIncremento();

   return temp;
}

Fecha &Fecha::operator+=(unsigned int additionalDays)
{
   for (int i = 0; i < additionalDays; ++i)
      ayudaIncremento();

   return *this;
}

bool Fecha::esBisiesto(int probarAnio)
{
   if (probarAnio % 400 == 0 || (probarAnio % 100 != 0 && probarAnio % 4 == 0))
      return true;
   else
      return false;
} // end function esBisiesto

// determine whether the dia is the last dia of the mes
bool Fecha::finMes(int probarDia) const
{
   if (mes == 2 && esBisiesto(anio))
      return probarDia == 29; // last dia of Feb. in leap anio
   else

      return probarDia == dias[mes];
} // end function finMes

// function to help increment the date
void Fecha::ayudaIncremento()
{
   // dia is not end of mes
   if (!finMes(dia))
      ++dia;          // increment dia
   else if (mes < 12) // dia is end of mes and mes < 12
   {
      ++mes;   // increment mes
      dia = 1; // first dia of new mes
   }           // end if
   else        // last dia of anio
   {
      ++anio;  // increment anio
      mes = 1; // first mes of new anio
      dia = 1; // first dia of new mes
   }           // end else
} // end function ayudaIncremento

// overloaded output operator
ostream &operator<<(ostream &output, const Fecha &d)
{
   static string mesName[13] = {"", "Enero", "Febrero",
                                "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto",
                                "Septiembre", "Octubre", "Noviembre", "Diciembre"};
   output << mesName[d.mes] << ' ' << d.dia << ", " << d.anio;
   return output; // enables cascading
} // end function operator<<