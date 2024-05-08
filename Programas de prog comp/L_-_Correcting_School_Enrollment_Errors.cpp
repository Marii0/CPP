#include "bits/stdc++.h"
// assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr << #x << "=" << (x) << endl;
#define RAYA cerr << "======================" << endl;
#define RAYAS cerr << "......................" << endl;
//#define DBG(x) ;
//#define RAYA ;
//#define RAYAS ;

//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, n2, a, b, c, take = 0, noot = 0, mis = 0;
    unordered_map<int, map<int, int>> mp, mp2;
    map<int, map<int, int>> res;
    bool bol, bolo, cen;
    ;
    map<int, int> mp1;
    map<int,int> aux;
    cin >> n >> n2;

    while (n--)
    {
        //mp1.clear();
        cin >> a;
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            cin >> c;
            mp[a][c]++;
            mp2[a][c]++;
        }
        //mp[a] = mp1;
    }
    /*for (auto it = mp.begin(); it != mp.end(); it++)
    {
        mp2[it->first] = it->second;
    }*/

    while (n2--)
    {
        bol = true;
        mp1.clear();
        cin >> a;
        cin >> b;
        /*for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->first == a)
            {
                bol = true;
                break;
            }
            else
            {
                bol = false;
            }
        }*/
        bol=(mp[a].size()>0);
        if (bol)
        {
            aux = mp[a];
            if(aux.size()>0){
                while (b--)
                    {
                        cin >> c;
                        aux[c]--;
                    }
                    mp2[a] = aux;
                    mp.erase(a);
            }
            
        }
        else
        {
            while (b--)
            {
                cin >> c;
                mp1[c]--;
                mp2[a] = mp1;
            }
        }
    }

    for (auto it = mp2.begin(); it != mp2.end(); it++)
    {
        res[it->first] = it->second;
        bolo = false;
        for (auto ot = it->second.begin(); ot != it->second.end(); ot++)
        {
            if (ot->second == -1)
            {
                noot++;
                bolo = true;
            }
            else if (ot->second == 1)
            {
                mis++;
                bolo = true;
            }
        }
        if (bolo)
        {
            take++;
        }
    }

    if (take != 0 || noot != 0 || mis != 0)
    {
        for (auto it = res.begin(); it != res.end(); it++)
        {
            cen = true;
            for (auto ot = it->second.begin(); ot != it->second.end(); ot++)
            {
                if (ot->second != 0)
                {
                    cen = false;
                    break;
                }
            }

            if (cen)
            {
            }
            else
            {
                cout << it->first << ' ';
                for (auto ot = it->second.begin(); ot != it->second.end(); ot++)
                {
                    if (ot->second == -1)
                    {
                        cout << ot->first * -1 << ' ';
                    }
                    else if (ot->second == 1)
                    {
                        cout << '+' << ot->first << ' ';
                    }
                }
                cout << endl;
            }
        }

        cout << "MISTAKES IN " << take << " STUDENTS: " << noot << " NOT REQUESTED, " << mis << " MISSED" << endl;
    }
    else
    {
        cout << "GREAT WORK! NO MISTAKES FOUND!" << endl;
    }
}
//--------------------EOSOLUTION---------------------------------