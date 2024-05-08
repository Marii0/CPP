#include "bits/stdc++.h"
using namespace std;
#define RAYA "------------------------"

const int N = 25;
int adjacency_list[N][N];
int cont = 0;
int res=0;

void ffill(int x, int y, int maximo)
{
    int oldcolor = 1;
    int newcolor = 0;
    if (y == -1 || y == maximo || x == -1 || x == maximo)
    {
        return;
    }
    if (adjacency_list[x][y] == oldcolor)
    {
        adjacency_list[x][y] = newcolor;
        ffill(x + 1, y, maximo);     // norte
        ffill(x - 1, y, maximo);     // sur
        ffill(x, y + 1, maximo);     // este
        ffill(x, y - 1, maximo);     // oeste
        ffill(x + 1, y + 1, maximo); // norte este
        ffill(x - 1, y - 1, maximo); // sur oeste
        ffill(x - 1, y + 1, maximo); // este sur
        ffill(x + 1, y - 1, maximo); // oeste norte
        cont++;
        res=max(cont,res);
    }
}

int main()
{
    int Tc, lado, maximo;
    string str;
    
    cin >> Tc;
    cin.ignore();
    getline(cin,str);
    str.clear();
    while (Tc--)
    {
        lado = 0;
        res=0;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                adjacency_list[i][j] = 0;
            }
        }

        while (getline(cin, str), str.size() != 0)
        {
            for (int x = 0; x < str.size(); x++)
            {
                adjacency_list[x][lado] = str[x] - 48;
            }
            lado++;
        }

        for (int y = 0; y < lado; y++)
        {
            for (int x = 0; x < lado; x++)
            {
                if (adjacency_list[x][y] == 1)
                {
                    //cont++; cuenta los componentes
                    ffill(x, y, lado);
                    cont=0;
                }
            }
        }

        /*for (int y = 0; y < lado; y++)
        {
            for (int x = 0; x < lado; x++)
            {
                cout << adjacency_list[x][y];
            }
            cout << endl;
        }*/
        cout << res<<endl;
        if(Tc!=0){
            cout<<endl;
        }
    }
}
