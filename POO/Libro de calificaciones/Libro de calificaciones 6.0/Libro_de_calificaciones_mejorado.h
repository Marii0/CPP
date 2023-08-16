#include "bits/stdc++.h"

using namespace std;

class Librocalificaciones
{
private:
    string nombre_curso;
    string nom_alumno;
    int matricula;
    vector <float> vec;
    int num_materias;
public:  
    Librocalificaciones(string,string,int, int);

    string getcurso();
    string getnom();
    int getmatricula();
    void menu();
    void setnombre();
    void setmatricula();
    void mostrar();
    void ingresarcali();
    float promedio();
    void getpromedio();

};