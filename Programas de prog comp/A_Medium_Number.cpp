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
	int tC,a;
    vector <int> vec;

	cin >> tC;
	while (tC--) {
        for (int i = 0; i < 3; i++)
        {
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        cout<<vec[1]<<endl;
        vec.clear();
        

	}

}
//--------------------EOSOLUTION---------------------------------