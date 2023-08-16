#include "Agenda.h"

// Funciones
//  a agregar funciones se le llama implementacion
void Agenda::mensaje()
{ // se le agrega el nombre de la clase y "::", significa que esta funcion pertence a la agenda
    cout << "Bienvenido a la agenda Mario" << endl;
}

void Agenda::revisar()
{
    cout << nombre << endl;
    cout << telefono << endl;
}
