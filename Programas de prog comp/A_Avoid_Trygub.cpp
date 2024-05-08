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
    string str;

	cin >> tC;
	while (tC--) {
        str.clear();
        cin>>num;
        cin>>str;
        for (int i = 1; i < num; i++)
        {
            if(str[i]=='u'){
                for (int j = i; j < num; j++)
                { 
                    if(str[j]=='b'){
                        swap(str[i],str[j]);
                    }
                }
            }
            
            
            
        }

        cout<<str<<endl;
        
        
	}

}
//--------------------EOSOLUTION---------------------------------