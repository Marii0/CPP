#include "bits/stdc++.h"

using namespace std;

class Librocalificaciones
{

private:
    char nombrecurso[20];
    float calificacionmax;

public:
    Librocalificaciones(float, float, float);

    void setnombrecurso(char *);
    string getnombrecurso();
    void mensaje();
    void capturarcalificaciones();
    void mostrarreporte();
    float maximo(float, float, float);
};

// definicion