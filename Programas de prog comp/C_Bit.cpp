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
	int tC,n,x,res=0;
    string str;

	cin >> tC;
	while (tC--) {
        x=0;
        cin>>str;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]=='+' && str[i]==str[i+1]){
                x++;
            }
            if(str[i]=='-' && str[i]==str[i+1]){
                x--;
            }
        }
        res+=x;
        
	}
    cout<<res<<endl;

}
//--------------------EOSOLUTION---------------------------------