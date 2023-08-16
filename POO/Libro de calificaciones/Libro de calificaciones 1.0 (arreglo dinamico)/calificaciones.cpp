#include "bits/stdc++.h"
using namespace std;

int main(){
    float num;
    int n;
    float *arr= new float[n];
    float promedio=0;

    cout<<"ingresa el numero de materias: ";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Ingresa la calificacion del indice "<<i<<" : ";
        cin>>num;
        arr[i]=num;
        cout<<"La calificacion en el indice "<<i<<" es: "<<arr[i]<<endl<<endl;
        promedio+=arr[i];
    }

    cout<<"El promedio final es: "<<promedio/n<<endl;
    
}