#include "Librocalificaciones.h"

float Librocalificaciones::maximo(float c1, float c2, float c3)
{
    if (c1 >= c2 && c1 >= c3)
    {
        return c1;
    }
    else if (c2 >= c1 && c2 >= c3)
    {
        return c2;
    }
    else if (c3 >= c2 && c3 >= c1)
    {
        return c3;
    }
}

Librocalificaciones::Librocalificaciones(float cal1, float cal2, float cal3)
{
    calificacionmax = maximo(cal1, cal2, cal3);
}

void Librocalificaciones::setnombrecurso(char *_nombre)
{
    // nombrecurso=_nombre;
    strcpy(nombrecurso, _nombre); //<string>
}

void Librocalificaciones::mensaje()
{
    cout << nombrecurso << endl;
}
// implementacion