#include "bits/stdc++.h"

using namespace std;

class Librocalificaciones
{
private:
    string nombre_alumno;
    int matricula;
    int num_materias;
    int num_unidades;
    vector<vector<float>> vec;
    map<int, string> mp;

public:
    Librocalificaciones(string, int, int, int);

    void ingresarmaterias();
    void ingresarcalificaciones();
    void mostrarcalificaciones();
};