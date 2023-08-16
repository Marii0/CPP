#include "Cajero.h"

Usuario::Usuario(int h)
{
    n = h;
}

float Usuario::getsaldo()
{
    return saldo;
}

void Usuario::setsaldo()
{
}

bool Usuario::verifacionNip(int n)
{
    if (NIP == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}