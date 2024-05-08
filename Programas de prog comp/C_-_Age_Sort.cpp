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
	int n=1, num;
    vector <int> vec;

    while(n!=0){
        vec.clear();
        cin>>n;

        if(n==0){
            
        }else{
            for (int i = 0; i < n; i++)
            {
                cin>>num;
                vec.push_back(num);
            }
            sort(vec.begin(),vec.end());
            for (int i = 0; i < n; i++)
            {
                if (i==n-1)
                {
                    cout<<vec[i];
                }else{
                    cout<<vec[i]<<' ';
                }
                
                
            }
            cout<<endl;
        }
    }
    
    

}
//--------------------EOSOLUTION---------------------------------