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
	long long n;

	cin >> n;
    while (n!=1)
    {
        cout<<n<<" ";
        if(n%2==0){
        n=n/2;
        }
        if(n%2!=0){
            n=(n*3)+1;
        }
    }
    cout<< 1;
    
	

}
//--------------------EOSOLUTION---------------------------------