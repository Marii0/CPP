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
typedef long long int ll;
bool solve(vector<ll> vec)
{
    bool bol=false;
    bool bol2=true;
    ll suma=0;
    for (int i = 1; i < vec.size(); i++)
    {
        suma+=vec[i];
    }
    for (int i = 1; i < vec.size(); i++)
    {
        if(vec[i]<vec[i-1]){
            bol2=false;
        }
    }
    if(bol2){
       if(suma%vec[0]==0){
            bol=true;
        } 
    }
    
    return bol;
    
    
}

//--------------------SOLBEGIN---------------------------------
int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	ll tC,n,num;
    bool bol;
    vector <ll> vec;

	cin >> tC;
	while (tC--) {
        vec.clear();
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            vec.push_back(num);
        }
        bol=solve(vec);
        cout<<(bol?"YES":"NO")<<endl;
        

	}

}
//--------------------EOSOLUTION---------------------------------