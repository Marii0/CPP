#include "Libro_de_calificaciones_mejorado.cpp"

int main(){
    string curso="matematicas";
    string nombre="Alberto";
    int matricula=190558;
    int n;

    cout<<"Ingrese el numero de materias: ";
    cin>>n;
    
    Librocalificaciones alumno1(curso,nombre,matricula,n);
    alumno1.menu();
    
}