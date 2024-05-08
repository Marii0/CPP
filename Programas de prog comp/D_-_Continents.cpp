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

const int N = 20;
char adjacency_list[N][N];
int maximo = 0;
int res = 0;

void ffill(int y, int x, int ladoy, int ladox)
{
    char land = 'l';
    char water = 'w';

    if (x == -1)
    {
        x = ladox - 1;
    }

    if (x == ladox)
    {
        x = 0;
    }

    if (adjacency_list[y][x] == 'l')
    {
        adjacency_list[y][x] = 'w';
        res++;
        ffill(y + 1, x, ladoy, ladox); // norte
        ffill(y - 1, x, ladoy, ladox); // sur
        ffill(y, x + 1, ladoy, ladox); // este
        ffill(y, x - 1, ladoy, ladox); // oeste
    }
}

//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int ladox, ladoy, coorx = 0, coory = 0, cont;
    char letra;
    char tierra2;

    while (cin >> ladoy >> ladox)
    {
        cont = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                adjacency_list[i][j] = 'w';
            }
        }

        for (int y = 0; y < ladoy; y++)
        {
            for (int x = 0; x < ladox; x++)
            {
                cin >> letra;
                adjacency_list[y][x] = letra;
            }
        }

        cin >> coory;
        cin >> coorx;

        tierra2 = adjacency_list[coory][coorx];

        for (int y = 0; y < ladoy; y++)
        {
            for (int x = 0; x < ladox; x++)
            {
                if (adjacency_list[y][x] == tierra2)
                {
                    adjacency_list[y][x] = 'l';
                }
                else
                {
                    adjacency_list[y][x] = 'w';
                }
            }
        }

        ffill(coory, coorx, ladoy, ladox);

        res = 0;

        for (int y = 0; y < ladoy; y++)
        {
            for (int x = 0; x < ladox; x++)
            {
                if (adjacency_list[y][x] == 'l')
                {
                    res = 0;
                    ffill(y, x, ladoy, ladox);
                    cont = max(cont, res);
                }
            }
        }

        cout << cont << endl;
    }
}
//--------------------EOSOLUTION---------------------------------