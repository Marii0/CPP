#include "bits/stdc++.h"
using namespace std;
#define endl "\n"

class Persona{
    private:
    string nombre;
    int edad;
    int estudios;
    int cuenta_bank;
    int mascotas;
    int comida;
    int estres;

    public:
    Persona(int _edad,string _nombre){
        edad = _edad;
        nombre = _nombre;
        estudios = 1;
        cuenta_bank = 100;
        mascotas = 0;
        comida = 50;
        estres = 0;
        }//constructor
    
    void trabajar();
    void comer(); //utiliza la variable comida y estres
    void relajarse();
    void comprar(); //regresa un booleano, utiliza la variable cuenta_bank
    void estudiar();
    void morir();
    void stats(){
        cout << "hola soy " << nombre << " y tengo " << edad << " anios" << endl;
        cout << "nivel de estudios: " << estudios << endl;
        cout << "cuenta de banco: " << cuenta_bank << endl;
        cout << "numero de mascotas: " << mascotas << endl;
        cout << "nivel de hambre: " << comida << endl;
        cout << "nivel de estres: " << estres << endl;
    }
};

int main(){
    int ed;
    string nom;

     cout<<"ingresa tu nombre: ";
     cin>>nom;
     cout<<"ingresa tu edad: ";
     cin>>ed;

     Persona p1(ed,nom);
     p1.stats();
}