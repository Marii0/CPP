#include "Cajero.h"

clientes lista[2]={{"Juan",2121},{"Mario",2222}};

void verificarNip(int nip){
    for (int i = 0; i < 2; i++)
    {
        if(lista[i].nip== nip){
            cout<<"Bienvenido a banco UACJ"<<endl;
            return;
        }
    }
    cout<<"El nip no existe"<<endl;
}