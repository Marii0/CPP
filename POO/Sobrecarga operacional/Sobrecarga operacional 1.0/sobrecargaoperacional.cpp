#include <iostream>

using namespace std;

class Fraccion
{
private:
    int numerador, denominador;
public:
    Fraccion(int=1, int=2);

    //friend  class& operator *(class&, class&); , el & significa como referencia a la clase
    friend Fraccion& operator -(Fraccion&, Fraccion&);
    friend ostream& operator <<(ostream&, Fraccion&);
    friend istream& operator >>(istream&, Fraccion&);
}temp;

Fraccion::Fraccion(int _numerador, int _denominador)
{
    numerador=_numerador;
    denominador=_denominador;
}

//sobrecarfa del operador -
Fraccion& operator -(Fraccion&a, Fraccion &b){
    temp.numerador=(a.numerador*b.denominador)-(a.denominador*b.numerador);
    temp.denominador=(a.denominador*b.denominador);
    return temp;
}

ostream& operator <<(ostream&imprimir, Fraccion &frac_x){
    imprimir<<"Resultado = "<<frac_x.numerador << ',' <<frac_x.denominador <<endl;
}

istream& operator >>(istream&capturar, Fraccion &frac_x){
    cout<<"Ingrese el numerador: "<<endl;
    capturar>>frac_x.numerador;
    cout<<"Ingrese el denominador: "<<endl;
    capturar>>frac_x.denominador;
}


int main(){
    Fraccion A;
    cin>>A;

    Fraccion B;
    cin>>B;

    Fraccion C;
    C= A - B;

    cout<<C;
}
