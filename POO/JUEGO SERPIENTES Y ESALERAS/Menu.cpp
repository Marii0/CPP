#include "Menu.h"

Menu::Menu()
{
}

void Menu::mostrarmenu()
{
    cout << "Bienvenido a Serpientes y escaleras" << endl
         << endl;
    cout << "1. Jugar." << endl
         << "-1. Salir" << endl
         << endl
         << "Ingresa una opcion: ";
    cin >> opcion;
    if (opcion == 1 || opcion == -1)
    {
        error = false;
    }
    else
    {
        error = true;
    }
    while (error)
    {
        mostrarmenuerror();
    }
}

void Menu::mostrarmenuerror()
{
    cout << "La opcion que ingresaste no existe, intenta de nuevo." << endl
         << endl;
    cout << "1. Jugar." << endl
         << "-1. Salir" << endl
         << "Ingresa una opcion: ";
    cin >> opcion;
    if (opcion == 1 || opcion == -1)
    {
        error = false;
    }
    else
    {
        error = true;
    }
}

void Menu::mostrarmenujugardenuevo()
{
    cout << "Fin del juego" << endl
         << endl
         << "Quieres jugar de nuevo?" << endl
         << endl;
    cout << "1. Jugar." << endl
         << "-1. Salir" << endl
         << "Ingresa una opcion: ";
    cin >> opcion;
    if (opcion == 1 || opcion == -1)
    {
        error = false;
    }
    else
    {
        error = true;
    }
    while (error)
    {
        mostrarmenuerror();
    }
}

int Menu::getopcion()
{
    return opcion;
}

void Menu::getuser1()
{
    cout << "Ingresa el username del primer jugador (el username debe ser menor o igual a 5 caracteres): ";
    cin >> user1;
    if (user1.size() > 5)
    {
        errorlong = true;
        while (errorlong)
        {
            getuser1errorlong();
        }
    }
}

void Menu::getuser1errorlong()
{
    cout << "El username  del primer jugador es muy largo, recuerda que tiene que ser menor o igual a 5 caracteres." << endl;
    cout << "Ingresa el username del primer jugador: ";
    user1.clear();
    cin >> user1;
    if (user1.size() <= 5)
    {
        errorlong = false;
    }
    else
    {
        errorlong = true;
    }
}

void Menu::getuser2()
{
    cout << "Ingresa el username del segundo jugador (el username debe ser menor o igual a 5 caracteres): ";
    cin >> user2;
    if (user2.size() > 5 || user2 == user1)
    {
        if (user2 == user1)
        {
            errornameigual = true;
        }
        else if (user2.size() > 5)
        {
            errorlong = true;
        }
        while (errorlong || errornameigual)
        {
            if (errorlong)
            {
                getuser2errorlong();
            }

            else if (errornameigual)
            {
                getuser2errornameigual();
            }
        }
    }
}

void Menu::getuser2errorlong()
{
    cout << "El username  del segundo jugador es muy largo, recuerda que tiene que ser menor o igual a 5 caracteres." << endl;
    cout << "Ingresa el username del segundo jugador: ";
    user2.clear();
    cin >> user2;
    if (user2.size() <= 5)
    {
        errorlong = false;
    }
    else
    {
        errorlong = true;
    }
    if (user2 == user1)
    {
        errornameigual = true;
    }
    else
    {
        errornameigual = false;
    }
}

void Menu::getuser2errornameigual()
{
    cout << "El username  del segundo jugador es el mismo que el del primer jugador. Cambialo:)" << endl;
    cout << "Ingresa el username del segundo jugador: ";
    user2.clear();
    cin >> user2;
    if (user2.size() <= 5)
    {
        errorlong = false;
    }
    else
    {
        errorlong = true;
    }
    if (user2 == user1)
    {
        errornameigual = true;
    }
    else
    {
        errornameigual = false;
    }
}

string Menu::strgetuser1()
{
    return user1;
}

string Menu::strgetuser2()
{
    return user2;
}
