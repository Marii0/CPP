#include "bits/stdc++.h"
using namespace std;

const int N = 1000;
bool visited[N];
vector<char> adj[N];

void dfs(char node)
{
    // preorder
    visited[node] = 1;

    // inorder
    for (int i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }

    // postorder
}

int main()
{

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        char max, x, y;
        int cont = 0;
        string input;

        cin >> max;
        cin.ignore();

        for (char i = 'A'; i <= max; i++)
        {
            visited[i] = false;
        }
        for (int i = 'A'; i <= max; i++)
        {
            adj[i].clear();
        }

        while (getline(cin, input), input.size() != 0)
        {
            adj[input[0]].push_back(input[1]);
            adj[input[1]].push_back(input[0]);
        }

        for (char i = 'A'; i <= max; i++)
        {

            if (visited[i] != 1)
            {
                dfs(i);
                cont++;
            }
        }
        if (tc == 0)
        {
            cout << cont << endl;
        }
        else
        {
            cout << cont << endl
                 << endl;
        }
    }
}
