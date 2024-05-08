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

//--------------------SOLBEGIN---------------------------------
int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	int tC;
    int a,b, c;

    vector <int> vec;
    map <int,int> mp;

	cin >> tC;
	while (tC--) {
        vec.clear();
        mp.clear();
        int cont=0;
        cin>>a>>b;
        
        for (int i = 0; i < a; i++)
        {
            cin>>c;
            vec.push_back(c);
        }

        for (int i = 0; i < a; i++)
        {
            mp[vec[i]]++;
        }

        for (auto it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second*1 > b){
                cont+=b;
            }
            else{
                cont+=(it->second*1);
            }
        }
        
        cout<<cont<<endl;
        

	}

}
//--------------------EOSOLUTION---------------------------------