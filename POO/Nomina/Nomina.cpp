#include "Nomina.h"

Nomina::Nomina()
{
}

void Nomina::setreloj(){

    cout<<"Ingresa el numero de reloj: ";
    cin>>Num_reloj;
}

void Nomina::setnombre(){
    Nombre.clear();
    cout<<"Ingresa el nombre del empleado: ";
    cin>>Nombre;
}

void Nomina::settipodeempleado(){
    Tipo_empleado.clear();
    cout<<"\"Base\""<<endl<<"\"Comision\""<<endl<<"\"Horas\""<<endl<<"Ingresa el tipo de empleado: ";
    cin>>Tipo_empleado;
}

void Nomina::sethoras(){
    cout<<"Ingresa el numero de horas trabajadas: ";
    cin>>Horas;
}

string Nomina::gettipoempleado(){
    return Tipo_empleado;
}

void Nomina::setsueldobase(){
    cout<<"Ingresa el sueldo base: ";
    cin>>Sueldo_base;
}

void Nomina::getsueldobase(){
    float sueldob_ISR=Sueldo_base*ISR;
    cout<<"Numero de reloj: "<<Num_reloj<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Sueldo base: "<<Sueldo_base<<endl;
    cout<<"Deduccion del IMSS: "<<IMSS<<endl;
    cout<<"Deduccion del ISR: "<<sueldob_ISR<<endl;
    cout<<"Sueldo neto: "<<Sueldo_base-IMSS-sueldob_ISR<<endl;
}

void Nomina::setcostohoras(){
    cout<<"Ingressa el costo por hora: ";
    cin>>Costo_horas;
}

void Nomina::getsueldocomision(){
    cout<<"Numero de reloj: "<<Num_reloj<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Horas trabajadas: "<<Horas<<endl;
    cout<<"Costo por hora: "<<Costo_horas<<endl;
    cout<<"Sueldo neto: "<<Horas*Costo_horas<<endl;
}

void Nomina::setventas(){

    cout<<"Ingresa el total de las ventas: ";
    cin>>Ventas;
    cout<<"Ingresa el valor por cada venta: ";
    cin>>Costo_ventas;
}

void Nomina::getsueldohoras(){
    cout<<"Numero de reloj: "<<Num_reloj<<endl;
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Numero de ventas: "<<Horas<<endl;
    cout<<"Costo por cada venta: "<<Costo_ventas*Comision<<endl;
    cout<<"Sueldo neto: "<<Horas*(Costo_ventas*Comision)<<endl;
}
