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
	int b, p, num,aux,cont=0,res=0;
	vector <int> vec,paresa;

	cin>>b>>p;

	for (int i = 0; i < b*2; i++)
	{
		cin>>num;
		vec.push_back(num);
	}
	
	aux=b-p;
	if (aux!=0)
	{
		for (int i = 0; i < aux*3; i++)
		{
			cont++;
		}
		
		
		cout<<cont;
	}
	else{
		for (int i = 0; i < vec.size()/2; i++)
		{
			res+=abs(vec[i]-vec[i+p]);
		}
		cout<<res;
	}
	
	
	
	

}
//--------------------EOSOLUTION---------------------------------