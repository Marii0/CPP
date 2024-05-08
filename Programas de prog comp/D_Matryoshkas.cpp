#include "bits/stdc++.h"
// assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr << #x << "=" << (x) << endl;
#define RAYA cerr << "======================" << endl;
#define RAYAS cerr << "......................" << endl;
// #define DBG(x) ;
// #define RAYA ;
// #define RAYAS ;

//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int tC, n, num, cont,help;
    map <int,int> mp;
    vector <int> vec;


    cin >> tC;
    while (tC--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            mp[num]++;
        }

        cont=0;

        while (mp.size()!=0)
        {
            help=0;
            for (auto it= mp.begin(); it!=mp.end(); it++)
            {
                if(it->second==0){
                    break;
                }
                if(help==0){
                    cont++;
                    help=it->first;
                    mp[it->first]--;
                    if(it->second==0){
                        vec.push_back(it->first);
                    }
                    
                }
                else if(it->first-help==1){
                    help=it->first;
                    mp[it->first]--;
                    if(it->second==0){
                        vec.push_back(it->first);
                    }
                }
                else{
                    break;
                }
                
            }
            for (int i = 0; i < vec.size(); i++)
            {
                mp.erase(vec[i]);
            }
            vec.clear();
            
            
        }
        
        
        cout << cont << endl;

        mp.clear();
    }
}
//--------------------EOSOLUTION---------------------------------