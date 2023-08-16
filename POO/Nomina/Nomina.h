#include "bits/stdc++.h"

using namespace std;

class Nomina
{
private:
    int Num_reloj;
    string Nombre;
    string Tipo_empleado;
    float Costo_ventas;
    float Ventas;
    float Sueldo_base;
    float Sueldo=Horas*Costo_horas;
    float Horas;
    float Costo_horas;
    float IMSS=110.00;
    float ISR=0.3;
    float Comision=0.1;
public:
    Nomina();

    void setreloj();
    void setnombre();
    void settipodeempleado();
    void sethoras();
    string gettipoempleado();
    void setsueldobase();
    void getsueldobase();
    void setcostohoras();
    void getsueldocomision();
    void setventas();
    void getsueldohoras();
};
