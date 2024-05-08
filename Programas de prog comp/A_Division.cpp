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

	cin >> tC;
	while (tC--) {
        cin>>num;
        if(num<1400){
            cout<<"Division 4"<<endl;
        }
        if(num>=1400 && num<1600){
            cout<<"Division 3"<<endl;
        }
        if(num>=1600 && num<1900){
            cout<<"Division 2"<<endl;
        }
        if(num>=1900){
            cout<<"Division 1"<<endl;
        }

	}

}
//--------------------EOSOLUTION---------------------------------