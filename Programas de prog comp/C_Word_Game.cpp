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
	int tC,n,cont1,cont2,cont3;
    string str;
    unordered_map <string, int> mp;
    unordered_map <int, string> mpp;
 
	cin>>tC;
	while (tC--) {
        cont1=0;
        cont2=0;
        cont3=0;
        cin>>n;
 
        for (int i = 0; i < n*3; i++)
        {
            cin>>str;
            mp[str]=3;
            mpp[i]=str;
        }
        for (auto it = mpp.begin(); it!= mpp.end(); it++)
        {
            mp[it->second]--;
        }
        for (auto it = mpp.begin(); it!= mpp.end(); it++)
        {
            if (mp[it->second]==2)
            {
                mp[it->second]=3;
            }
            
        }
        
        for (auto it = mpp.begin(); it!= mpp.end(); it++)
        {
            if (it->first<n)
            {
             cont1+=mp[it->second];   
            }
            if (it->first>=n && it->first<n*2)
            {
             cont2+=mp[it->second];   
            }
            if (it->first>=n*2 && it->first<n*3)
            {
             cont3+=mp[it->second];   
            }
            
        }
        cout<<cont1<<" "<<cont2<<" "<<cont3<<endl;

        mpp.clear();
        mp.clear();
    
 
	}
 
}
//--------------------EOSOLUTION---------------------------------