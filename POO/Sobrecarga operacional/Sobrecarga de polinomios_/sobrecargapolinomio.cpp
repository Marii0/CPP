#include "bits/stdc++.h"

using namespace std;

class Polinomio
{
private:
    map <int,int> poli;
public:
    Polinomio(string);
    
    friend ostream& operator <<(ostream&, Polinomio&); //se puede poner en  privado porque tiene la etiqueta friend
    friend istream& operator >>(istream&, Polinomio&);
    friend Polinomio& operator +(Polinomio&, Polinomio&);
}res;

Polinomio::Polinomio(string polinomio)
{
    
}

Polinomio& operator +(Polinomio&a,Polinomio&b)
{
    
}

istream& operator >>(istream&capturar,Polinomio&monomio_x)
{   
    
}

ostream& operator <<(ostream&imprimir,Polinomio&monomio_x)
{
    
    
}

int main(){
    string poli;
    //ingresar (2^3 + 2^2 - 2)
    getline(cin,poli);
    Polinomio A(poli);
    
    
}