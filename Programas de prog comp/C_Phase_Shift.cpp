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
    char ch;
    string str;
    string res;
    string alpha="abcdefghijklmnopqrstuvwxyz";
    map <char> mp;

	cin >> tC;
	while (tC--) {
        str.clear();
        cin>>n;

        for (int i = 0; i < n; i++)
        {
            cin>>ch;
            str+=ch;
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i]==alpha[i])
            {
                mp[str]==alpha[i]
            }
            
        }
        

	}

}
//--------------------EOSOLUTION---------------------------------