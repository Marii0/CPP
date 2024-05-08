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
	int tC,n,pal;
    string str;

	cin >> tC;
	while (tC--) {
        str.clear();
        cin>>n;
        cin>>pal;
        for (int i = 0; i < pal; i++)
        {
            str+='a';
        }
        for (int i = pal; i < n; i++)
        {
                if(str[i-1]=='a')
                {
                    str += 'b';
                }
                else if(str[i-1]=='b')
                {
                    str += 'c';
                }else if(str[i-1]=='c')
                {
                    str += 'a';
                }
            
        }
        cout<<str<<endl;
        
        

	}

}
//--------------------EOSOLUTION---------------------------------