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
    vector <int> vec;

	cin >> tC;
	while (tC--) {
        vec.clear();
        cin>>n;
        for (int i = 1; i <= n ; i++)
        {
            vec.push_back(i);
        }
        for (int i = 0; i < vec.size(); i++)
        {
            cout<<vec[i]<<' ';
        }
        cout<<endl;
        
        

	}

}
//--------------------EOSOLUTION---------------------------------