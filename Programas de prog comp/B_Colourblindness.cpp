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
    string strr;
    bool bol;
    char ch;

	cin>> tC;
	while (tC--) {
        cin>>n;

        bol=true;
        for (int i = 0; i < n; i++)
        {
            cin>>ch;
            str+=ch;
        }
        for (int i = 0; i < n; i++)
        {
            cin>>ch;
            strr+=ch;
        }

        for (int i = 0; i < n; i++)
        {
            if((str[i]=='R' && (strr[i]=='G' || strr[i]=='B')) || (strr[i]=='R' && (str[i]=='G' || str[i]=='B'))){
                bol=false;
            }
        }
        if (bol)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        

        str.clear();
        strr.clear();
	}

}
//--------------------EOSOLUTION---------------------------------