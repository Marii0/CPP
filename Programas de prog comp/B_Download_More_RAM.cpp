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
	int tC,k,ram,back,n,init;
    vector <int> vec;
    vector <int> vecc;
    map <int,int> mp;

	cin >> tC;
	while (tC--) {
        vec.clear();
        vecc.clear();
        mp.clear();
        cin>>n;
        cin>>init;
        for (int i = 0; i < n; i++)
        {
            cin>>ram;
            vec.push_back(ram);   
        }
        for (int i = 0; i < n; i++)
        {
            cin>>back;
            vecc.push_back(back);   
        }
        for (int i = 0; i < n; i++)
        {
            mp[vec[i]]+=vecc[i];
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if(init>=it->first){
                init+=it->second;
            }
        }
        cout<<init<<endl;
        
        
        
        

	}

}
//--------------------EOSOLUTION---------------------------------