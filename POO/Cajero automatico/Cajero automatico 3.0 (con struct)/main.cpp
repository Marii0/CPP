#include "Cajero.cpp"

int main()
{
    int nip;

    do
    {
        cout << "0. Salir" << endl
             << "Intruduce un nip: ";
        cin >> nip;
        verificarNip(nip);
    } while (nip != 0);
}