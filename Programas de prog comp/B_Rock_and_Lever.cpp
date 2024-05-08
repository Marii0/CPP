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
typedef long long int ll;
int sumavec(vector<int> vec)
{
    int suma = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        suma += vec[i];
    }
    return suma;
}
 
//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int tC, n, num,ind;
    int cont;
    vector<int> vec;
    map <int,ll> mp;
 
    cin >> tC;
    while (tC--)
    {
        mp.clear();
        vec.clear();
        cin >> n;
        while (n--)
        {
            cin >> num;
            vec.push_back(num);
        }
        n = vec.size();
        for (int i = 0; i < n; i++)
        {
            cont = 0;
            while (vec[i] != 1)
            {
                vec[i] = (vec[i] >> 1);
                cont++;
            }
            ind = cont + 1;
            mp[ind]++;
        }
        ll  res=0;
        for (auto it= mp.begin(); it!= mp.end(); it++)
        {
            if(it->second>1){
               res= res+(it->second*(it->second-1))/2; 
            }
            
        }
        if(res%2==0){
            res=res;
        }
        
        cout << res << endl;
    }
}
//--------------------EOSOLUTION---------------------------------