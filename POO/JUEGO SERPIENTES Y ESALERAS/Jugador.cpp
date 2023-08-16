#include "Jugador.h"

Jugador::Jugador(string _user)
{
    user = _user;
}

void Jugador::tirar_dados()
{
    string a;
    cout << user << " tu posicion actual es: " << posicion << endl;
    cout << "Presione enter para lanzar los dados: " << endl;
    /*getline(cin, a);
    a.erase();
    cin.ignore();*/
    dado1 = (rand() % 6 + 1);
    dado2 = (rand() % 6 + 1);
    // dado1 = 1;
    // dado2 = 1;
    cout << "El dado 1 cayo en el numero: " << dado1 << endl;
    cout << "El dado 2 cayo en el numero: " << dado2 << endl;
    avance = dado1 + dado2;
    cout << "Avanzaras " << avance << " casillas." << endl;
    avanzar();
}

void Jugador::avanzar()
{
    int aux = posicion;
    aux += avance;
    if (aux > 100)
    {
        cout << "No avanzas porque no puedes avanzar a una posicion mayor que 100" << endl;
    }
    else if (aux == 100)
    {
        cout << "Felicidades " << user << ", ganaste!!:D" << endl;
        ganadordepartida = true;
    }
    else
    {
        posicion += avance;
        cout << "Tu posicion despues de tirar los dados es: " << posicion << endl;
    }
    if (posicion == 2)
    {
        posicion = 38;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 7)
    {
        posicion = 14;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 8)
    {
        posicion = 31;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 15)
    {
        posicion = 26;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 21)
    {
        posicion = 42;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 28)
    {
        posicion = 84;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 36)
    {
        posicion = 44;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 51)
    {
        posicion = 67;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 71)
    {
        posicion = 91;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 78)
    {
        posicion = 98;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }
    else if (posicion == 87)
    {
        posicion = 87;
        cout << user << " caiste en una casilla escalera, subiste a la posicion: " << posicion << endl;
    }

    if (posicion == 16)
    {
        posicion = 6;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 46)
    {
        posicion = 25;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 49)
    {
        posicion = 11;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 62)
    {
        posicion = 19;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 64)
    {
        posicion = 60;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 74)
    {
        posicion = 53;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 89)
    {
        posicion = 68;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 92)
    {
        posicion = 88;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 95)
    {
        posicion = 75;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
    else if (posicion == 99)
    {
        posicion = 80;
        cout << user << " caiste en una casilla serpiente, bajaste a la posicion: " << posicion << endl;
    }
}

string Jugador::getuser()
{
    return user;
}

void Jugador::quitarban()
{
    cout << user << " estas baneado este turno.:(" << endl;
    turnosbaneados--;
    if (turnosbaneados == 0)
    {
        baneo = false;
    }
}

void Jugador::setban()
{
    turnosbaneados = 2;
    baneo = true;
}

int Jugador::getdado1()
{
    return dado1;
}

int Jugador::getdado2()
{
    return dado2;
}

bool Jugador::getban()
{
    return baneo;
}

bool Jugador::getdadosiguales()
{
    if (dado1 == dado2)
    {
        return dadosiguales = true;
    }
    return dadosiguales = false;
}

void Jugador::tirar_dadosultimavez()
{
    cout << user << " tu posicion actual es: " << posicion << endl;
    cout << "Presione cualquier tecla para lanzar los dados: " << endl;

    dado1 = (rand() % (6) + 1);
    dado2 = (rand() % (6) + 1);
    cout << "El dado 1 cayo en el numero: " << dado1 << endl;
    cout << "El dado 2 cayo en el numero: " << dado2 << endl;
    if (dado1 == dado2)
    {
        cout << "Obtuviste un ban.:(" << endl;
        setban();
    }
    else
    {
        avance = dado1 + dado2;
        cout << "Avanzaras " << avance << " casillas." << endl;
        avanzar();
    }
}

bool Jugador::getganadordepartida()
{
    return ganadordepartida;
}
