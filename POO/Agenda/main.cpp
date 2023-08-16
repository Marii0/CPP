#include "Agenda.cpp"

int main()
{
    // crear objeto de la clase agenda
    // clase--nombre del objeto
    Agenda contacto1("Juan", "656-2050397");
    contacto1.mensaje();
    contacto1.revisar();

    Agenda contacto2("Luis", "656-2068987");
    contacto2.revisar();
}