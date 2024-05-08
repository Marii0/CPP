#include "bits/stdc++.h"
// assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr << #x << "=" << (x) << endl;
#define RAYA cerr << "======================" << endl;
#define RAYAS cerr << "......................" << endl;
// #define DBG(x) ;
// #define RAYA ;
// #define RAYAS ;

//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    long long int tC, lenght, num, cont;
    string str, aux, res;
    bool can;

    cin >> tC;
    while (tC--)
    {
        can = true;
        res.clear();
        cin >> str >> lenght;

        num = 0;
        aux;
        cont = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
            {
                cont++;
                aux += str[i];
            }
            else if (cont == 0)
            {
                lenght--;
                if (lenght < 0)
                {
                    can = false;
                    break;
                }
            }
            else
            {
                if (cont > 7)
                {
                    can = false;
                    break;
                }
                else
                {
                    num = 0;
                    num += stoi(aux);
                    lenght -= num;
                    if (lenght < 0)
                    {
                        can = false;
                        break;
                    }
                    aux.clear();
                    cont = 0;
                }
            }
        }

        if (can)
        {
            aux.clear();
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
                {
                    aux += str[i];
                }
                else if (aux.size() == 0)
                {
                    res += str[i];
                }
                else
                {
                    for (int j = 0; j < stoi(aux); j++)
                    {
                        res += str[i];
                    }
                    aux.clear();
                }
            }
            cout << res << endl;
        }
        else
        {
            cout << "unfeasible" << endl;
        }
    }
}
//--------------------EOSOLUTION---------------------------------