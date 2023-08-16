//NOTA: ESTE GRAFO ESTA DIRIGIDO
#include <iostream>
#include <vector>
using namespace std;
#define RAYA "------------------------"

const int N = 1e7;
int contnodos;
bool visited[N];
vector<int> adj_list[N];

void dfs(int node)
{
    char xx;
    // preorder
    contnodos++;       // cuenta el numero de nodos en el componente
    visited[node] = 1; // se coloca que fue visitado el booleano con index de un nodo

    // inorder
    for (int i : adj_list[node]) // se recorre todo los vecinos del nodo que esta en el index del vector
    {
        if (!visited[i]) // si no esta visitado entra a la funcion dfs para la recursividad
        {
            dfs(i);
        }
    }

    // topsort
    xx = node;
    cout << xx << " ";
}

int main()
{
    int filas, contcomp = 0;
    char x, y;

    cin >> filas; // filas del adj_list

    for (int i = 0; i < N; i++) // coloco que todos los nodos estan visitados
    {
        visited[i] = true;
    }

    for (int i = 0; i <= filas; i++) // coloca que no ha sido visitado un booleano con index del nodo
    {
        cin >> x >> y;
        visited[x] = false;
        visited[y] = false;
        adj_list[x].push_back(y);
    }

    for (int i = 0; i < N; i++) // encuntra todos los componentes de un grafo con el booleano visited con index de un nodo
    {
        if (!visited[i])
        {
            contnodos = 0;
            contcomp++; // cuenta los componentes
            //cout << "Componentes: " << contcomp << endl;
            dfs(i);
            //cout << endl;
            //cout << "No. nodos en el componente: " << contnodos << endl;
            //cout << RAYA;
            //cout << endl;
        }
    }
}
