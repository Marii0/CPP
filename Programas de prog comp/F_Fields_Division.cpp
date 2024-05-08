#include "bits/stdc++.h"
using namespace std;

const int N=1e2;
bool visited[N];
vector <int> adj_list[N];

int main(){
    int nodos,caminos,x,y, max;
    map <int,int> mp;
    vector <int> maximos;

    cin>>nodos>>caminos;
    for (int i = 0; i < N; i++)
    {
        visited[i]=true;
    }

    for (int i = 0; i < caminos; i++)
    {
        cin>>x>>y;

        visited[x]=false;
        visited[y]=false;
        adj_list[x].push_back(y);
        mp[x]++;
        mp[y]++;
    }

    max=0;

    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        if (it->second>max)
        {
            max=it->second;
        }
        
    }

    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        if (it->second==max)
        {
            maximos.push_back(it->first);
        }
    }

    for (int i = 0; i < maximos.size(); i++)
    {
        cout<<maximos[i]<<' ';
    }
    
    
    
    
}