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
	int tC,num; 
    vector <int> vec;
    bool bol;

	cin >> tC;
	while (tC--) {
        vec.clear();
        bol=true;
        for (int i = 0; i < 4; i++)
        {
            cin>>num;
            vec.push_back(num);
        }
        if((vec[2]>vec[0] && vec[2]>vec[1]) && (vec[3]>vec[0] && vec[3]>vec[1])){
            bol=false;
        }
        if((vec[0]>vec[2] && vec[0]>vec[3]) && (vec[1]>vec[2] && vec[1]>vec[3])){
            bol=false;
        }
        cout<<(bol?"YES":"NO")<<endl;
        
        

	}

}
//--------------------EOSOLUTION---------------------------------