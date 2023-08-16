#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define RAYA "------------------------"

const int N = 1e5;
int contnodos;
bool visited[N];
vector<int> adj_list[N];

void bfs(int nodo_inicial)
{
	queue<int> q;
	int node;

	q.push(nodo_inicial);
	visited[nodo_inicial] = true;

	while (!q.empty())
	{
		contnodos++;
		node = q.front();

		q.pop();
		cout << node << ' ';
		for (int i : adj_list[node])
		{
			if (!visited[i])
			{
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

//--------------------SOLBEGIN---------------------------------
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int filas, x, y, contcomp;

	cin >> filas;

	for (int i = 0; i < N; i++)
	{
		visited[i] = true;
	}

	for (int i = 0; i < filas; i++)
	{
		cin >> x >> y;
		visited[x] = false;
		visited[y] = false;
		adj_list[x].push_back(y);
		adj_list[y].push_back(x);
	}

	for (int i = 0; i < N; i++)
	{
		if (!visited[i])
		{
			contnodos = 0;
			contcomp++;
			cout << "Componente: " << contcomp << endl;
			bfs(i);
			cout << endl;
			cout << "No. nodos en el componente: " << contnodos << endl;
			cout << RAYA;
			cout << endl;
		}
	}
}
//--------------------EOSOLUTION---------------------------------