#include "Libro_de_calificaciones.cpp"

int main(){
    string alumno;
    int matricula;
    int num_materias;
    int num_unidades;

    cout<<"Ingresa el nombre del alumno: ";
    getline(cin, alumno);
    cout<<"Ingresa la matricula del alumno: ";
    cin>>matricula;
    cout<<"Ingresa el numero de materias que lleva el alumno: ";
    cin>>num_materias;
    cout<<"Ingresa el numero de unidades que tiene la materia: ";
    cin>>num_unidades;

    Librocalificaciones boleta(alumno,matricula,num_materias,num_unidades);
    boleta.ingresarcalificaciones();
    boleta.ingresarmaterias();
    boleta.mostrarcalificaciones();


}