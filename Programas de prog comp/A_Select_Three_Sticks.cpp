#include <iostream>
#include <vector>
#include <algorithm>
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
	int tC,n,f,minn,a;
    vector <int> vec;


	cin >> tC;
	while (tC--) {
        vec.clear();
        minn=1e9;
        cin>>n;

        for (int i = 0; i < n; i++)
        {
            cin>>f;
            vec.push_back(f);   
        }

        sort(vec.begin(), vec.end());

        for (int i = 1; i < n-1; i++)
        {
            a=(vec[i+1]-vec[i])+(vec[i]-vec[i-1]);
            minn=min(minn,a);
        }

        cout<<minn<<endl;


	}

}
//--------------------EOSOLUTION---------------------------------