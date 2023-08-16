#include "Fecha.cpp"

int main()
{
   Fecha d1(2,27,2010); // December 27, 2010      
   Fecha d2; // defaults to January 1, 1900

    cout << "Fecha1 is " << d1 << "\nd2 is " << d2;
   //cout << "\n\nFecha1 += 7 is " << ( d1 += 7 );
/*
   d2.setFecha( 2, 28, 2008 );
   cout << "\n\n  d2 is " << d2;
   cout << "\n++Fecha2 is " << ++d2 << " (anio bisiesto admite 29th)";

   Fecha d3( 7, 13, 2010 );

   cout << "\n\nTesting the prefix increment operator:\n"
      << "  Fecha3 is " << d3 << endl;
   cout << "++Fecha3 is " << ++d3 << endl;
   cout << "  Fecha3 is " << d3;

   cout << "\n\nTesting the postfix increment operator:\n"
      << "  Fecha3 is " << d3 << endl;
   cout << "Fecha3++ is " << d3++ << endl;
   cout << "  Fecha3 is " << d3 << endl;
   */
      return 0;
} // end main