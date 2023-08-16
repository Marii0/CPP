#include "bits/stdc++.h"

using namespace std;

class Complejo
{
private:
    string str;
public:
    Complejo();

    void setcomplejo();
    float getreal();
    float getimg();
    void sumacomplejo(Complejo, Complejo);
    void restacomplejo(Complejo, Complejo);
    void multiplicarcomplejo(Complejo, Complejo);
    void dividircomplejo(Complejo,Complejo);
}w;

Complejo::Complejo(){

};

void Complejo::setcomplejo()
{
    string _str;
    cout<<"Ingresa un numero complejo. Ejem: \"(1 + 2i)\": ";
    getline(cin, _str);
    str=_str;
}

float Complejo::getreal(){
    string real="";
    int cont=-1;

    for (int h = str.size()-1; h >= 0; h--)
    {
        if(str[h]=='-' || str[h]=='+'){
            cont+=h+1;
            break;
        }

    }
    
    
    for (int h = 0; h < cont; h++)
    {
        if(str[h]=='1' || str[h]=='2' || str[h]=='3' || str[h]=='4' || str[h]=='5' || str[h]=='6' || str[h]=='7' || str[h]=='8' || str[h]=='9' || str[h]=='0' || str[h]=='.' || str[h]=='-'){
            real+=str[h];
        }

    }
    return stof(real);
    
}

float Complejo::getimg(){
    string img="";
    int cont=-1;
    for (int h = str.size()-1; h >= 0; h--)
    {
        if(str[h]=='-' || str[h]=='+'){
            cont+=h+1;
            break;
        }

    }
    
    for (int h = cont; h < str.size(); h++)
    {
        if(str[h]=='1' || str[h]=='2' || str[h]=='3' || str[h]=='4' || str[h]=='5' || str[h]=='6' || str[h]=='7' || str[h]=='8' || str[h]=='9' || str[h]=='0' || str[h]=='.' || str[h]=='-'){
            img+=str[h];
        }

    }
    return stof(img);
}

void Complejo::sumacomplejo(Complejo x, Complejo y){
    cout<<"La suma del complejo ("<<x.getreal()<<" + ("<<x.getimg()<<"i)) y el complejo ("<<y.getreal()<<" + ("<<y.getimg()<<"i)) es: ";
    cout<<"("<<x.getreal()+y.getreal()<<" + ("<<x.getimg()+y.getimg()<<"i))"<<endl;
}

void Complejo::restacomplejo(Complejo x, Complejo y){
    cout<<"La resta del complejo ("<<x.getreal()<<" + ("<<x.getimg()<<"i)) y el complejo ("<<y.getreal()<<" + ("<<y.getimg()<<"i)) es: ";
    cout<<"("<<x.getreal()-y.getreal()<<" + ("<<x.getimg()-y.getimg()<<"i))"<<endl;
}

void Complejo::multiplicarcomplejo(Complejo x, Complejo y){
    float a,b,c,d;
    
    a=x.getreal()*y.getreal();
    b=(x.getreal()*y.getimg())+(x.getimg()*y.getreal());
    c=(x.getimg()*y.getimg())*-1;

    a=a+c;

    cout<<"La multiplicacion del complejo ("<<x.getreal()<<" + ("<<x.getimg()<<"i)) y el complejo ("<<y.getreal()<<" + ("<<y.getimg()<<"i)) es: ";
    cout<<"("<<a<<" + ("<<b<<"i))"<<endl;
}

void Complejo::dividircomplejo(Complejo x, Complejo y){
    float a,b,c,d,f;
    
    a=x.getreal()*y.getreal();
    b=(x.getreal()*y.getimg())+(x.getimg()*y.getreal());
    c=(x.getimg()*y.getimg())*-1;

    a=a+c;
    f=(x.getreal()*y.getreal())+(x.getimg()*y.getimg());

    cout<<"La dividir del complejo ("<<x.getreal()<<" + ("<<x.getimg()<<"i)) y el complejo ("<<y.getreal()<<" + ("<<y.getimg()<<"i)) es: ";
    cout<<"("<<a/f<<" + ("<<b/f<<"i))"<<endl;
}

int main(){
    Complejo x;
    Complejo y;
    x.setcomplejo();
    y.setcomplejo();
    w.sumacomplejo(x,y);
    w.restacomplejo(x,y);
    w.multiplicarcomplejo(x,y);
    w.dividircomplejo(x,y);

}