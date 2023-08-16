#include "Libro_de_calificaciones.h"

Librocalificaciones::Librocalificaciones(string _nom, int _matricula, int _num_materias, int _num_unidades){
    nombre_alumno=_nom;
    matricula=_matricula;
    num_materias=_num_materias;
    num_unidades=_num_unidades;

    for(int i =0; i<=num_unidades;i++){
    arr[i] = new float[num_materias+1];
    }
    for (int i = 0; i <= num_materias; i++)
    {
        for (int j = 0; j <=num_unidades; j++)
        {
            arr[i][j]=0;
        }
        
    }
}

void Librocalificaciones::ingresarmaterias(){
    string materia;

    for (int i = 0; i < num_materias; i++)
    {
        cout<<"Ingresa la materia "<<i<<" : ";
        getline(cin,materia);
        mp[i+1]=materia;
    }
    
}

void Librocalificaciones::ingresarcalificaciones(){
    float calificacion;

    for (int i = 1; i <=num_materias; i++)
    {
        for (int j = 1; j <=num_unidades ; j++)
        {
            cout<<"Ingresa la calificacion de "<<mp[i]<<" de la unidad "<<j<<" : ";
            cin>>calificacion;
            arr[i][j]=calificacion;
        }
        
    }
    
    
}

void Librocalificaciones::mostrarcalificaciones(){
    cout<<nombre_alumno<<"  "<<matricula<<endl<<endl;
    cout<<"             ";
    for (int i = 0; i < num_unidades; i++)
    {
        cout<<"Unidad "<<i+1<<"     ";
    }
    cout<<endl;
    for (int i = 1; i <=num_materias; i++)
    {
        cout<<mp[i]<<"    ";
        for (int j = 1; j <= num_unidades; j++)
        {
            cout<<arr[i][j]<<"    ";
        }
        
    }
    
    
}
