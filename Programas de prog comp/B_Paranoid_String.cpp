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
    string bin;

	cin >> tC;
	while (tC--) {
		bin.clear();
		int contcero=0;
		int contuno=0;
        cin>>n>>bin;
        
		for (int i = 0; i < n; i++)
		{
			if (bin[i]=='0')
			{
				contcero++;
			}
			else{
				contuno++;
			}
			
		}
		if(contcero==0){
			cout<<bin.size()<<endl;
		}
		else{
			contuno= contuno*(bin.size()-1);
			cout<<contcero+contuno<<endl;
		}
		

	}

}
//--------------------EOSOLUTION---------------------------------