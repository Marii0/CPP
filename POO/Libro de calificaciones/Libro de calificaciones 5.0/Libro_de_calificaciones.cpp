#include "Libro_de_calificaciones.h"

Librocalificaciones::Librocalificaciones(string _nom){
    nombre_curso=_nom;
}

void Librocalificaciones::mensaje(string curso){
    cout<<"Bienvenido a la boleta del curso "<<curso<<"!"<<endl;
}//metodo de instancia, esdecir, que es una funcion de la clase

/*void mensaje(){
    cout<<"Hola"<<endl;
}*/ //es una funcion que si funciona pero que no accede a los atributos de la clase, SOLO ES UNA FUNCION

string Librocalificaciones::getcurso(){
    return nombre_curso;
}

void Librocalificaciones::setcurso()
{   string str;
    cout<<"Ingresa el nombre del curso de nuevo: ";
    getline(cin, str);
    nombre_curso=str;
}
