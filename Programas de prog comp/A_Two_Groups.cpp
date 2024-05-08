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
	long long int tC,n,num,a;

	cin >> tC;
	while (tC--) {
        cin>>n;
        a=0;
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            a+=num;
        }
        cout<<abs(a)<<endl;
	}

}
//--------------------EOSOLUTION---------------------------------