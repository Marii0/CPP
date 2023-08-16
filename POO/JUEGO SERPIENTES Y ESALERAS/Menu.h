#include <iostream>
#include <stdlib.h>
using namespace std;

class Menu
{
private:
    int opcion;
    bool error, errorlong, errornameigual;
    string user1, user2;

public:
    Menu();

    void mostrarmenu();
    void mostrarmenuerror();
    void mostrarmenujugardenuevo();
    int getopcion();
    void getuser1();
    void getuser1errorlong();
    void getuser2errorlong();
    void getuser2errornameigual();
    void getuser2();
    string strgetuser1();
    string strgetuser2();
} menu;