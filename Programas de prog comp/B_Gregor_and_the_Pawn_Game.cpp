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
    int tC, n, cont;
    string str1, str2;

    cin >> tC;
    while (tC--)
    {
        cin >> n;
        cin >> str1 >> str2;

        cont = 0;
        for (int i = 0; i < n; i++)
        {
            if (str2[i] == '1')
            {
                if (i == 0)
                {
                    if (str1[i] == '0')
                    {
                        cont++;
                        str1[i] ='2';
                    }
                    else if (str1[i + 1] == '1')
                    {
                        cont++;
                        str1[i + 1] ='2';
                    }
                    else
                    {
                    }
                }
                else if (i == n - 1)
                {
                    if (str1[i] == '0')
                    {
                        cont++;
                        str1[i] ='2';
                    }
                    else if (str1[i - 1] == '1')
                    {
                        cont++;
                        str1[i - 1] ='2';
                    }
                    else
                    {
                    }
                }
                else
                {
                    if (str1[i] == '0')
                    {
                        cont++;
                        str1[i] ='2';
                    }
                    else if (str1[i - 1] == '1')
                    {
                        cont++;
                        str1[i - 1] ='2';
                    }
                    else if (str1[i + 1] == '1')
                    {
                        cont++;
                        str1[i + 1] ='2';
                    }
                    else
                    {
                    }
                }
            }
        }
        cout << cont << endl;
    }
}
//--------------------EOSOLUTION---------------------------------