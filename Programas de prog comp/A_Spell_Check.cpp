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
	string str;
	bool bol1,bol2,bol3,bol4,bol5;

	cin >> tC;
	while (tC--) {
		cin>>n;
		cin>>str;
		bol1=false;
		bol2=false;
		bol3=false;
		bol4=false;
		bol5=false;

		if(str.size()==5){
			for (int i = 0; i < 5; i++)
			{
				if (str[i]=='T')
				{
					bol1=true;
				}
				if (str[i]=='r')
				{
					bol2=true;
				}
				if (str[i]=='i')
				{
					bol3=true;
				}
				if (str[i]=='m')
				{
					bol4=true;
				}
				if (str[i]=='u')
				{
					bol5=true;
				}
				
			}
			if(bol1==true && bol2==true && bol3==true && bol4==true && bol5==true){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
			
		}
		else{
			cout<<"NO"<<endl;
		}
		str.clear();

	}

}
//--------------------EOSOLUTION---------------------------------