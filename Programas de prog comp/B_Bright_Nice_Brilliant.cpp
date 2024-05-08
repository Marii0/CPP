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

	cin >> tC;
	while (tC--) {
        cin>>n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (j==0)
                {
                    str+="1 ";
                }
                else if(j==i-1){
                    str+="1";
                }
                else{
                    str+="0 ";
                }
                
            }
            cout<<str<<endl;
            str.clear();
        }
        
        

	}

}
//--------------------EOSOLUTION---------------------------------