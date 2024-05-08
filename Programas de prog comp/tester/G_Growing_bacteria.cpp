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
	int Has,Need,mili,val;
	vector <int> vec;

	cin >> Has>>Need>>mili;
	for (int i = 0; i < Has; i++)
	{
		cin>>val;
		vec.push_back(val);
	}
	if (vec.size()>=Need)
	{
		cout<<0;
	}else{
		
	}
	
	

}
//--------------------EOSOLUTION---------------------------------