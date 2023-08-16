#include "bits/stdc++.h"

using namespace std;

class Monomio
{
private:
    unsigned int coef_t1;
    unsigned int exp_t1;
public:
    Monomio(unsigned int=1,unsigned int=2);
    
    friend ostream& operator <<(ostream&, Monomio&); //se puede poner en  privado porque tiene la etiqueta friend
    friend istream& operator >>(istream&, Monomio&);
    friend Monomio& operator +(Monomio&, Monomio&);
}res;

Monomio::Monomio(unsigned int _coef, unsigned int _exp)
{
    coef_t1=_coef;
    exp_t1=_exp;
}

Monomio& operator +(Monomio&a,Monomio&b)
{
    if(a.coef_t1>=0 && b.coef_t1>=0 && a.exp_t1==b.exp_t1){
        res.coef_t1=a.coef_t1+b.coef_t1;
        return res;
    }else{
        cout<<"No se pueden sumar estos monomios."<<endl;
        return res;
    }
}

istream& operator >>(istream&capturar,Monomio&monomio_x)
{   string mono,comple,comple2;
    cout<<"Ingresa el monomio: ";
    capturar>>mono;

    for (int i = 0; i < mono.size(); i++)
    {
        if(mono[i]=='1' || mono[i]=='2' || mono[i]=='3' || mono[i]=='4' || mono[i]=='5' || mono[i]=='6' || mono[i]=='7' || mono[i]=='8' || mono[i]=='9' || mono[i]=='0'){
            comple=mono[i];
            break;
        }
    }
    for (int i = mono.size(); i >= 0; i--)
    {
        if(mono[i]=='1' || mono[i]=='2' || mono[i]=='3' || mono[i]=='4' || mono[i]=='5' || mono[i]=='6' || mono[i]=='7' || mono[i]=='8' || mono[i]=='9' || mono[i]=='0'){
            comple2=mono[i];
            break;
        }
    }
    monomio_x.coef_t1=(unsigned int)stoi(comple);
    monomio_x.exp_t1=(unsigned int)stoi(comple2);
    
}

ostream& operator <<(ostream&imprimir,Monomio&monomio_x)
{
    if(monomio_x.exp_t1==0){
        imprimir<<"El monomio es: "<<monomio_x.coef_t1<<endl;
    }else{
        imprimir<<"El monomio es: "<<monomio_x.coef_t1<<"x^"<<monomio_x.exp_t1<<endl;
    }
}

int main(){
    Monomio A;
    Monomio B;
    Monomio C;

    cin>>A;
    cin>>B;

    C=A+B;

    cout<<C;
}
