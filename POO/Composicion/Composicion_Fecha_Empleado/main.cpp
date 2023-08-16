#include "Empleado.cpp"

int main(int argc, char** argv) {
	
   Fecha birth( 1, 13, 1986 );
   Fecha hire( 3, 12, 2012 );
   Empleado gerente( "Hernandez", "Adrian", birth, hire );

   cout << endl;
   gerente.imprimir();
	return 0;
}