#include "Jugador.cpp"
#include "Menu.cpp"

int main()
{
    // menu/////////////////////////////
    menu.mostrarmenu();
    while (menu.getopcion() == 1)
    {
        // username////////////////////////////
        menu.getuser1();
        menu.getuser2();
        // Juego///////////////////////
        Jugador p1(menu.strgetuser1());
        Jugador p2(menu.strgetuser2());
        while (p1.getganadordepartida() == false && p2.getganadordepartida() == false)
        {
            if (p1.getban() == false && p1.getganadordepartida() == false && p2.getganadordepartida() == false)
            {
                p1.tirar_dados();
                if (p1.getdadosiguales() == true && p1.getganadordepartida() == false)
                {
                    cout << p1.getuser() << " tienes otro turno porque obtuvistes dos numeros iguales en los dados." << endl;
                    p1.tirar_dados();
                    if (p1.getdadosiguales() == true && p1.getganadordepartida() == false)
                    {
                        cout << p1.getuser() << " tienes otro turno porque obtuvistes dos numeros iguales en los dados." << endl;
                        p1.tirar_dadosultimavez();
                    }
                }
            }
            else if (p1.getganadordepartida() == false && p2.getganadordepartida() == false)
            {
                p1.quitarban();
            }

            if (p2.getban() == false && p1.getganadordepartida() == false && p2.getganadordepartida() == false)
            {
                p2.tirar_dados();
                if (p2.getdadosiguales() == true && p2.getganadordepartida() == false)
                {
                    cout << p2.getuser() << " tienes otro turno porque obtuvistes dos numeros iguales en los dados." << endl;
                    p2.tirar_dados();
                    if (p2.getdadosiguales() == true && p2.getganadordepartida() == false)
                    {
                        cout << p2.getuser() << " tienes otro turno porque obtuvistes dos numeros iguales en los dados." << endl;
                        p2.tirar_dadosultimavez();
                    }
                }
            }
            else if (p2.getganadordepartida() == false && p1.getganadordepartida() == false)
            {
                p2.quitarban();
            }
        }
        // volver a jugar/////////////////////////////////////
        menu.mostrarmenujugardenuevo();
    }
    // BYE//////
    cout << "Bye" << endl;
    //////////
}
