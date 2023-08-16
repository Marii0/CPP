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
    
    void trabajar(); //Utiliza nivel de estudios, cuenta bancaria
    void comer(); //utiliza la variable comida y estres
    void relajarse(); //utiliza la variable estres y mascotas
    void comprar(); //regresa un booleano, utiliza la variable cuenta_bank
    void estudiar(); //utiliza la variable estudios y estres
    void morir(); //utiliza la varable comida,estres
};

int main(){
    
}