#include "bits/stdc++.h"
//assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr<<#x<< "=" << (x) << endl;
#define RAYA cerr<<"======================"<<endl;
#define RAYAS cerr<<"......................"<<endl;
//#define DBG(x) ;
//#define RAYA ;
//#define RAYAS ;
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
int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	int tC,n,num;
    bool bol;
    map <int, int> mp;

	cin >> tC;
	while (tC--) {
        mp.clear();
        bol=true;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            mp[num]++;
        }
        for (auto it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>=3){
                cout<<it->first<<endl;
                bol=false;
                break;
            }
        }
        if(bol){
            cout<<"-1"<<endl;
        }
        
        
	}

}
//--------------------EOSOLUTION---------------------------------