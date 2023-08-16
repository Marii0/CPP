#include "bits/stdc++.h"

using namespace std;

class Usuario
{
private:
    int NIP = 2035;
    string nombre = "Mario";
    float saldo = 82334.54;
    int n;

public:
    Usuario(int);

    float getsaldo();
    void setsaldo();
    bool verifacionNip(int);
};