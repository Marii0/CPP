#include "bits/stdc++.h"
using namespace std;

int main(){
    float num;
    int n,m;
    float **arr= new float*[n];
    float promedio=0;
    string materia;
    map <int,string> mp;

    cout<<"Ingresa el numero de estudiantes: ";
    cin>>n;
    cout<<"Ingresa el numero de materias: ";
    cin>>m;

    for (int i = 0; i < m; i++)
    {
        cout<<"Asigna la materia al numero "<<i+1<<" : ";
        cin>>materia;
        mp[i+1]=materia;
    }
    
    for(int i =0; i<n;i++){
    arr[i] = new float[m];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Ingresa la calificacion del estudiante "<<i+1<<" en la materia "<<mp[j+1]<<" :";
            cin>>num;
            arr[i][j]=num;
            cout<<"La calificacion del estudiante "<<i+1<<" en la materia "<<mp[j+1]<<" es: "<<arr[i][j]<<endl<<endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            promedio+=arr[i][j];
        }
    }
    
    cout<<"El promedio final del grupo es: "<<promedio/(n*m)<<endl;
    
}