#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

class Jugador
{
private:
    string user;
    int avance = 0;
    int posicion = 1;
    bool baneo = false, dadosiguales, ganadordepartida = false;
    int turnosbaneados = 0;
    int dado1;
    int dado2;

public:
    Jugador(string);
    void tirar_dados();
    void tirar_dadosultimavez();
    void avanzar();
    string getuser();
    void setban();
    void quitarban();
    bool getban();
    bool getdadosiguales();
    int getdado1();
    int getdado2();
    bool getganadordepartida();
};
