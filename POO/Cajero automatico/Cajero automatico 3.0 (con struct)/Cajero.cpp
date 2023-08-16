#include "Cajero.h"
// consultar,retirar,depositar,cambiar nip,

clientes lista[2] = {{"Juan", 2121, 65000.00}, {"Mario", 2222, 23.25}};

void cambio(int nip)
{
    int nip_new;

    cout << "Ingresar el nuevo nip: ";
    cin >> nip_new;
    for (int i = 0; i < 2; i++)
    {
        if (lista[i].nip == nip)
        {
            lista[i].nip = nip_new;
            cout << "El nip fue cambiado" << endl
                 << "El nip es ahora: " << lista[i].nip << endl;
        }
    }
}

void depositar(int nip)
{
    float depo;

    cout << "Ingresar el monto a depositar: ";
    cin >> depo;
    for (int i = 0; i < 2; i++)
    {
        if (lista[i].nip == nip)
        {
            if (depo <= lista[i].saldo)
            {
                lista[i].saldo += depo;
                cout << "Monto depositado" << endl
                     << "Nuevo monto: " << lista[i].saldo << endl;
            }
        }
    }
}

void retirar(int nip)
{
    float retirar;

    cout << "Ingresar el monto a retirar: ";
    cin >> retirar;
    for (int i = 0; i < 2; i++)
    {
        if (lista[i].nip == nip)
        {
            if (retirar <= lista[i].saldo)
            {
                lista[i].saldo -= retirar;
                cout << "Monto retirado" << endl
                     << "Nuevo monto: " << lista[i].saldo << endl;
            }
        }
    }
}

void consultar(int nip)
{
    for (int i = 0; i < 2; i++)
    {
        if (lista[i].nip == nip)
        {
            cout << "Tu saldo es: " << lista[i].saldo << endl;
        }
    }
}

void menu(int nip)
{
    int num = 1;

    do
    {

        cout << "0. Salir" << endl
             << "1. Consultar saldo" << endl
             << "2. Retirar" << endl
             << "3. Depositar" << endl
             << "4. Cambio de nip" << endl
             << "Ingresa la opcion que quieres utilizar: ";
        cin >> num;
        switch (num)
        {
        case 1:
            consultar(nip);
            break;

        case 2:
            retirar(nip);
            break;
        case 3:
            depositar(nip);
            break;
        case 4:
            cambio(nip);
            num = 0;
            break;
        default:
            break;
        }

    } while (num != 0);
}

void verificarNip(int nip)
{
    for (int i = 0; i < 2; i++)
    {
        if (lista[i].nip == nip)
        {
            cout << "Bienvenido a banco UACJ " << lista[i].nombre << endl;
            menu(nip);
            return;
        }
    }
    cout << "El nip no existe" << endl;
}