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
	int tC,n,num;
    vector <int> vec;
    bool si;

	cin >> tC;
	while (tC--) {
        cin>>n;
        if (n==1)
        {
            
        }
        
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            vec.push_back(num);
        }
        for (int i = 0; i < n; i++)
        {
            if (vec[i]==vec[i+1])
            {
                si=true;
                break;
            }
            
        }
        if(si){
            cout<<"YES"<<endl;
            si=false;
        }else{
            cout<<"NO"<<endl;
        }
        vec.clear();
        

	}

}
//--------------------EOSOLUTION---------------------------------