#include <iostream>
using namespace std;

class Agenda
{
private:
    string nombre; // miembros de la clase
    string telefono;

public:
    void mensaje(); // se define la funcion
    void revisar();

    // constructores
    //  el constructor se llama igual que la clase
    Agenda(string _nom, string _tel)
    {
        telefono = _tel;
        nombre = _nom;
    } // constructor
};