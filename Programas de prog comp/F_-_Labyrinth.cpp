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
int cont = 0;
bool encontrado = false;
int minimo = 0;
string str;

void ffill(int y, int x, int ladoy, int ladox, bool right, bool left, bool up, bool down)
{
    if (!encontrado)
    {
        if (y == -1 || x == -1 || y == ladoy || x == ladox)
        {
            return;
        }
        else if (adjacency_list[y][x] == 'A')
        {
            cont++;
            adjacency_list[y][x] = '#';
            ffill(y, x + 1, ladoy, ladox, right = true, left = false, up = false, down = false);
            ffill(y, x - 1, ladoy, ladox, right = false, left = true, up = false, down = false);
            ffill(y + 1, x, ladoy, ladox, right = false, left = false, up = false, down = true);
            ffill(y - 1, x, ladoy, ladox, right = false, left = false, up = true, down = false);
        }
        else if (adjacency_list[y][x] == 'B')
        {
            if (right)
            {
                str += 'R';
                right = false;
            }
            else if (left)
            {
                str += 'L';
                left = false;
            }
            else if (up)
            {
                str += 'U';
                up = false;
            }
            else if (down)
            {
                str += 'D';
                down = false;
            }
            encontrado = true;
            minimo = cont;
            return;
        }
        else if (adjacency_list[y][x] == '.')
        {
            if (right)
            {
                str += 'R';
                right = false;
            }
            else if (left)
            {
                str += 'L';
                left = false;
            }
            else if (up)
            {
                str += 'U';
                up = false;
            }
            else if (down)
            {
                str += 'D';
                down = false;
            }

            cont++;
            adjacency_list[y][x] = '#';
            ffill(y, x + 1, ladoy, ladox, right = true, left = false, up = false, down = false);
            ffill(y, x - 1, ladoy, ladox, right = false, left = true, up = false, down = false);
            ffill(y + 1, x, ladoy, ladox, right = false, left = false, up = false, down = true);
            ffill(y - 1, x, ladoy, ladox, right = false, left = false, up = true, down = false);
        }
        else{
            return;
        }
    }
    else
    {
        return;
    }
}

//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int n, m;
    char letra;
    bool right, left, up, down;

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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (adjacency_list[i][j] == 'A')
            {
                ffill(i, j, n, m, right = false, left = false, up = false, down = false);
            }
        }
    }

    if (encontrado)
    {
        cout << "YES" << endl
             << minimo << endl
             << str << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
//--------------------EOSOLUTION---------------------------------