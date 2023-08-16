#include "Libro_de_calificaciones.cpp"

int main(){
    string curso;
    cout<<"Ingresa el nombre del curso: ";
    getline(cin, curso);
    //mensaje();
    Librocalificaciones boleta(curso);//crear objeto, la boleta esta instanciando a la clase, la boleta esta HACIENDO REFERENCIA a la clase
    boleta.mensaje(curso);//usar funcion del objeto, se le conoce como instanciar a la funcion
    boleta.setcurso();
    boleta.mensaje(boleta.getcurso());

}