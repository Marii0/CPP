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
	int tC,n;
    string str;
    string alpha="abcdefghijklmnopqrstuvwxyz";

	cin >> tC;
	while (tC--) {
        cin>>n;
        cin>>str;
    bool fin=false;
        for (int i = 25; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                if (alpha[i]==str[j]&&fin==false)
                {
                    cout<<i+1<<endl;
                    fin=true;
                    break;
                }
                if(fin){
                    break;
                }
            }
            
        }
        str.clear();
        
	}

}
//--------------------EOSOLUTION---------------------------------