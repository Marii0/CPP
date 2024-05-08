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
    int tC, spaces, num;
    map<int, int> mp;

    cin >> tC;
    while (tC--)
    {
        cin >> spaces;

        for (int i = 0; i < spaces; i++)
        {
            cin >> num;
            mp[i + 1] = num;
        }

        bool encontro = false;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            for (auto ot = mp.begin(); ot != mp.end(); ot++)
            {
                for (auto ut = mp.begin(); ut != mp.end(); ut++)
                {
                    if (it->first != ot->first && ot->first != ut->first && it->first != ut->first && (it->second + ot->second + ut->second) % 2 != 0)
                    {
                        cout << "YES" << endl
                             << it->first << ' ' << ot->first << ' ' << ut->first << endl;
                        encontro = true;
                        break;
                    }
                    if (encontro)
                    {
                        break;
                    }
                }
                if (encontro)
                {
                    break;
                }
            }
            if (encontro)
            {
                break;
            }
        }
        if (!encontro)
        {
            cout << "NO" << endl;
        }

        mp.clear();
    }
}
//--------------------EOSOLUTION---------------------------------