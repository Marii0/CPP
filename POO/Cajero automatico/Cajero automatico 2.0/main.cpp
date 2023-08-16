#include "Cajero.cpp"

int main()
{
    int NIP = 288;

    Usuario cliente1(NIP);

    if (cliente1.verifacionNip(NIP))
    {
        cout << "Saldo de pedro" << cliente1.getsaldo() << endl;
    }
    else
    {
        cout << "Nip incorrecto" << endl;
    }
}