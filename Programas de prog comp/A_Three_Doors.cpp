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
	int tC,k,k2,k3,num;
    map <int,int> mp;
    bool bol;

 	cin >> tC;
	while (tC--) {
        mp.clear();
        bol=true;
        cin>>k;
        k=k;
        for (int i = 1; i <= 3; i++)
        {
            cin>>num;
            mp[i]=num;
        }
        k2=0;
        k3=0;
        for (int i = 0; i < 3; i++)
        {
            if(k3==0 && k2==0){
                k2=mp[k];
                mp[k]=0;
                k=0;
            }
            else if(k3==0 && k==0){
                k3=mp[k2];
                mp[k2]=0;
                k2=0;

            }
            else if(k2==0 && k==0){
                k=mp[k3];
                mp[k3]=0;
                k3=0;

            }
            if(k==0 && k2==0 && k3==0){
                break;
            }
            
        }

        for (auto it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second!=0){
                bol=false;
                break;
            }
        }
        cout<<(bol?"YES":"NO")<<endl;
        
        
        

	}

}
//--------------------EOSOLUTION---------------------------------