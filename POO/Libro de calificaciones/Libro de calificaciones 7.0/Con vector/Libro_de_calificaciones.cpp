#include "Libro_de_calificaciones.h"

Librocalificaciones::Librocalificaciones(string _nom, int _matricula, int _num_materias, int _num_unidades)
{
    nombre_alumno = _nom;
    matricula = _matricula;
    num_materias = _num_materias;
    num_unidades = _num_unidades;
}

void Librocalificaciones::ingresarmaterias()
{
    string materia;

    for (int i = 1; i <= num_materias; i++)
    {
        cout << "Ingresa la materia " << i << " : ";
        cin >> materia; // error con getline
        mp[i] = materia;
    }
}

void Librocalificaciones::ingresarcalificaciones()
{
    float calificacion;

    for (int i = 1; i <= num_materias; i++)
    {
        vector<float> vecc;
        vecc.push_back(0);

        for (int j = 1; j <= num_unidades; j++)
        {
            cout << "Ingresa la calificacion de " << mp[i] << " de la unidad " << j << " : ";
            cin >> calificacion;
            vecc.push_back(calificacion);
        }
        vec.push_back(vecc);
    }
}

void Librocalificaciones::mostrarcalificaciones()
{
    cout << nombre_alumno << setw(25)<< matricula << endl
         << endl;
    cout <<setw(25);
    for (int i = 0; i < num_unidades; i++)
    {
        cout << "Unidad " << i + 1<<setw(10);
    }
    cout << endl;
    for (int i = 1; i <= vec.size(); i++)
    {
        cout << mp[i]<<setw(11);
        for (int j = 1; j <= num_unidades; j++)
        {
            cout << vec.at(i - 1).at(j)<<setw(10);
        }
        cout << endl;
    }
}