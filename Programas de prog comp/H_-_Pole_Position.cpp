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
    int n = 1, a, b;
    map<int, int> mp;
    vector<int> vec;
    bool error;

    while (n != 0)
    {
        cin >> n;
        if (n != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cin >> a;
                cin >> b;
                mp[a] = i + b;
            }

            for (int i = 1; i <= n; i++)
            {
                error == true;
                for (auto ot = mp.begin(); ot != mp.end(); ot++)
                {
                    if (i == ot->second)
                    {
                        vec.push_back(ot->first);
                        error = false;
                        break;
                    }
                    else
                    {
                        error = true;
                    }
                }
                if (error)
                {
                    break;
                }
            }

            if (error)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0; i < vec.size(); i++)
                {
                    if (i == (vec.size() - 1))
                    {
                        cout << vec[i] << endl;
                    }
                    else
                    {
                        cout << vec[i] << ' ';
                    }
                }
            }

            mp.clear();
            vec.clear();
        }
    }
}
//--------------------EOSOLUTION---------------------------------