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
	int tC,n,num,h=0,l=0;
    vector <int> vec;
    bool bol;

	cin >> tC;
	for (int i=1;i<=tC;i++) {
        cin>>n;
        vec.clear();
        h=0;
        l=0;
        bol=true;
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            vec.push_back(num);
        }
        if (vec.size()==1)
        {
            cout<<"Case "<<i<<": "<<h<<' '<<l<<endl;
            bol=false;
        }
        else{
            for (int i = 0; i < vec.size()-1; i++)
            {
             if (vec[i]<vec[i+1])
             {
                h++;
             }
             else if (vec[i]>vec[i+1])
             {
                l++;
             }
                
            }
            
        }
        if (bol)
        {
            cout<<"Case "<<i<<": "<<h<<' '<<l<<endl;
        }
        


        
        
        

	}

}
//--------------------EOSOLUTION---------------------------------