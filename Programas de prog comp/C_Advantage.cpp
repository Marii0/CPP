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
    int tC, maximo, n, num, aux, maximo2;
    vector<int> vec, vec2;
    map<int, int> mp;

    cin >> tC;
    while (tC--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            vec.push_back(num);
            vec2.push_back(num);
            mp[num]++;
        }
        maximo = 0;
        for (int i = 0; i < n; i++)
        {
            maximo = max(maximo, vec[i]);
        }
        bool error=false;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->first == maximo)
            {
                if (it->second >= 2)
                {
                    maximo2 = maximo;
                    error = true;
                }
            }
        }
        if (error)
        {

            for (int i = 0; i < n; i++)
            {
                if (vec[i] < maximo)
                {
                    aux = maximo - vec[i];
                    cout << aux * -1 << ' ';
                }
                if (vec[i] == maximo)
                {

                    cout << maximo - maximo2 << ' ';
                }
            }

            cout << endl;
            vec.clear();
            vec2.clear();
            mp.clear();
        }
        else
        {
            maximo2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (maximo != vec[i])
                {
                    maximo2 = max(maximo2, vec[i]);
                }
            }
            if (maximo2 == 0)
            {
                maximo2 = maximo;
            }

            for (int i = 0; i < n; i++)
            {
                if (vec[i] < maximo)
                {
                    aux = maximo - vec[i];
                    cout << aux * -1 << ' ';
                }
                if (vec[i] == maximo)
                {

                    cout << maximo - maximo2 << ' ';
                }
            }

            cout << endl;
            vec.clear();
            vec2.clear();
            mp.clear();
        }
    }
}
//--------------------EOSOLUTION---------------------------------