#include "bits/stdc++.h"
using namespace std;
#define RAYA "------------------------"

const int N = 25;
int adj_list[N][N];
int cont = 0;
int res = 0;

void ffill(int y, int x, int maximo)
{
    int oldcolor = 1;
    int newcolor = 0;
    if (y == -1 || y == maximo || x == -1 || x == maximo)
    {
        return;
    }
    if (adj_list[y][x] == oldcolor)
    {
        adj_list[y][x] = newcolor;
        ffill(y + 1, x, maximo); // norte
        ffill(y - 1, x, maximo); // sur
        ffill(y, x + 1, maximo); // este
        ffill(y, x - 1, maximo); // oeste
        /*ffill(y + 1, x + 1, maximo); // norte este
        ffill(y - 1, x - 1, maximo); // sur oeste
        ffill(y - 1, x + 1, maximo); // este sur
        ffill(y + 1, x - 1, maximo); // oeste norte*/
        // un cuadro conectado con 8 puntos
        cont++;
        res = max(cont, res);
    }
}

int main()
{
    int Tc, lado, maximo, contcomp;
    string str;

    cin >> Tc;
    cin.ignore();
    getline(cin, str);
    str.clear();
    while (Tc--)
    {
        contcomp = 0;
        lado = 0; // lado del grid
        res = 0;  // isla maxima

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                adj_list[i][j] = 0;
            }
        }

        while (getline(cin, str), str.size() != 0)
        {
            for (int x = 0; x < str.size(); x++)
            {
                adj_list[lado][x] = str[x] - 48;
            }
            lado++;
        }

        for (int y = 0; y < lado; y++)
        {
            for (int x = 0; x < lado; x++)
            {
                if (adj_list[y][x] == 1)
                {
                    contcomp++; // cuenta los componentes
                    ffill(y, x, lado);
                    cont = 0;
                }
            }
        }

        /*for (int y = 0; y < lado; y++)
        {
            for (int x = 0; x < lado; x++)
            {
                cout << adj_list[y][x];
            }
            cout << endl;
        }*/

        cout << "La isla mas grande es de: " << res << endl;
        cout << "No. de islas: " << contcomp << endl;
        if (Tc != 0)
        {
            cout << endl;
        }
    }
}
