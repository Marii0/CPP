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
    int n, m, contb;
    float mitadx, mitady;
    string c[116];
    vector<int> vec, vec1;

    cin >> n >> m;

    for (int i = 0; i <= n; i++)
    {
        getline(cin, c[i]);
    }
    bool find;
    for (int i = 0; i <= n; i++)
    {
        find = false;
        string res = c[i];
        for (int j = 0; j < m; j++)
        {
            if ((res[j] == 'B' && (res[j + 1] == 'W' || j == m - 1)) || (res[j] == 'B' && (res[j - 1] == 'W' || j == 0)))
            {
                vec.push_back(j + 1);
                find = true;
            }
        }

        if (find)
        {
            vec1.push_back(i);
        }
    }

    mitadx = ((float)vec[0] / 2);
    mitadx += ((float)vec[vec.size() - 1] / 2);
    mitady = ((float)vec1[0] / 2);
    mitady += ((float)vec1[vec1.size() - 1] / 2);

    cout << mitady << ' ' << mitadx << endl;
}
//--------------------EOSOLUTION---------------------------------