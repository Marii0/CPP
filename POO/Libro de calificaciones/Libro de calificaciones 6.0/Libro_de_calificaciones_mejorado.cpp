#include "Libro_de_calificaciones_mejorado.h"

Librocalificaciones::Librocalificaciones(string _nom, string _alumno,int _matricula, int _num_materias){
    nombre_curso=_nom;
    nom_alumno=_alumno;
    matricula=_matricula;
    num_materias=_num_materias;
}

int Librocalificaciones::getmatricula(){
    return matricula;
}

string Librocalificaciones::getnom(){
    return nom_alumno;
}

string Librocalificaciones::getcurso(){
    return nombre_curso;
}

void Librocalificaciones::mostrar(){
    cout<<"DATOS DEL ALUMNO"<<endl<<endl<<getcurso()<<endl<<getnom()<<endl<<getmatricula()<<endl<<endl;
}

void Librocalificaciones::menu(){
    int h;
    do
    {
        cout<<"BIENVENIDO "<<nom_alumno<<endl<<endl<<"OPCIONES:"<<endl<<"0. Salir"<<endl<<"1. Consultar datos"<<endl<<"2. Cambiar nombre"<<endl<<"3. Cambiar matricula"<<endl<<"4. Calcular promedio"<<endl<<endl;
        cout<<"Ingresa el numero de la opcion que desea ejecutar: ";
        cin>>h;
        switch (h)
        {
        case 1:
            mostrar();
            break;
        case 2:
            setnombre();
            break;
        case 3:
            setmatricula();
            break;
        case 4:
            ingresarcali();
            getpromedio();
            break;
        
        default:
            break;
        }
    } while (h!=0);
    

}

void Librocalificaciones::getpromedio(){
    cout<<"Tu promedio final es: "<<promedio()<<endl<<endl;
}

float Librocalificaciones::promedio(){
    float prom=0.0;
    for (int i = 0; i < vec.size(); i++)
    {
        prom+=vec[i];
    }

    return prom/vec.size();
    
}

void Librocalificaciones::ingresarcali(){
    float calificacion;
    for (int i = 0; i < num_materias; i++)
    {
        cout<<"Ingresa la calificacion de la materia "<<i+1<<": ";
        cin>>calificacion;
        vec.push_back(calificacion);
    }
    
}

void Librocalificaciones::setnombre(){
    string str;
    cout<<"Ingrese el nuevo numbre: ";
    cin>>str;
    nom_alumno=str;
}

void Librocalificaciones::setmatricula(){
    int mat;
    cout<<"Ingrese la nueva matricula: ";
    cin>>mat;
    matricula=mat;
}
