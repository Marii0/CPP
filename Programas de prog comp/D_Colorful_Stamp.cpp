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
	int tC,n;
    map <char,int> mp;
    char cr;
    string str;
    bool bol;

	cin >> tC;
	while (tC--) {
        str.clear();
        mp[R]=0;
        mp[B]=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>cr;
            str+=cr;
        }
        if(str.size()==1 || str.size()==2){
            bol=false;
        }
        for (int i = 0; i < str.size(); i++)
        {
            
            mp[str[i]]++;
            if(str[0]=='W'){
                continue;
            }else{
               if(str[i]=='W' && (mp[B]==0 || mp[R]==0)){
                mp.clear();
                bol=false;
                break;
                } 
            }
            
        }
        cout<<(bol?"yes":"no")<<endl;
        
        
        
        

	}

}
//--------------------EOSOLUTION---------------------------------