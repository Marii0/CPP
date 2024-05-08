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

const int N = 1000;
char adjacency_list[N][N];

void ffill(int y, int x, int ladoy, int ladox)
{
    if (y == -1 || y == ladoy || x == -1 || x == ladox)
    {
        return;
    }
    if (adjacency_list[y][x] == '.')
    {
        adjacency_list[y][x] = '#';

        ffill(y, x + 1, ladoy, ladox);
        ffill(y, x - 1, ladoy, ladox);
        ffill(y+1, x , ladoy, ladox);
        ffill(y-1, x , ladoy, ladox);
    }
}

//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n, m, cont;
    char letra;
    bool gente;

    cin >> n >> m;

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            adjacency_list[i][j] = '#';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> letra;
            adjacency_list[i][j] = letra;
        }
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adjacency_list[i][j];
        }
        cout << endl;
    }
    cout << endl;*/
    cont = 0;
    for (int i = 0; i < n; i++)
    {
        gente = false;
        for (int j = 0; j < m; j++)
        {
            if (adjacency_list[i][j] == '.')
            {
                cont++;
                ffill(i, j, n, m);
            }
        }
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adjacency_list[i][j];
        }
        cout << endl;
    }
    cout << endl;*/
    cout << cont << endl;
}
//--------------------EOSOLUTION---------------------------------