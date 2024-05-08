#include "bits/stdc++.h"
using namespace std;
#define RAYA "------------------------"

const int N = 25;
int adjacency_list[N][N];
int cont = 0;

void ffill(int y, int x, int maximo)
{
    int oldcolor = 1;
    int newcolor = 0;
    if (y == -1 || y == maximo || x == -1 || x == maximo)
    {
        return;
    }
    if (adjacency_list[y][x] == oldcolor)
    {
        adjacency_list[y][x] = newcolor;
        ffill(y + 1, x, maximo);     // norte
        ffill(y - 1, x, maximo);     // sur
        ffill(y, x + 1, maximo);     // este
        ffill(y, x - 1, maximo);     // oeste
        ffill(y + 1, x + 1, maximo); // norte este
        ffill(y - 1, x - 1, maximo); // sur oeste
        ffill(y - 1, x + 1, maximo); // este sur
        ffill(y + 1, x - 1, maximo); // oeste norte
        // un cuadro conectado con 8 puntos
    }
}

int main()
{
    int lado, maximo, n, yy, imagen_num = 0;
    string str;

    while (cin >> lado)
    {
        cin.ignore();
        cont=0;
        n = lado;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                adjacency_list[i][j] = 0;
            }
        }
        yy = 0;
        while (n--)
        {
            getline(cin, str);
            for (int x = 0; x < str.size(); x++)
            {
                adjacency_list[yy][x] = str[x] - 48;
            }
            yy++;
            str.clear();
        }

        for (int y = 0; y < lado; y++)
        {
            for (int x = 0; x < lado; x++)
            {
                if (adjacency_list[y][x] == 1)
                {
                    cont++;
                    ffill(y, x, lado);
                }
            }
        }
        imagen_num++;
        cout << "Image number " << imagen_num << " contains " << cont << " war eagles." << endl;
    }
}
