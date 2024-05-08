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
	int n,nn,num,res;
    vector <int> vec;
    vector <int> vecc;
        res=0;
        vec.clear();
        vecc.clear();
        cin>>n;
        cin>>nn;
        for (int i = 0; i < nn; i++)
        {
            if(i>=n && i<nn){
                num=0;
                vec.push_back(num); 
            }else{
                cin>>num;
                vec.push_back(num);
            }
               
        }
        for (int i = 0; i < nn; i++)
        {
            cin>>num;
            vecc.push_back(num);   
        }
        for (int i = 0; i < nn; i++)
        {
            res+=(vecc[i]-vec[i]);
        }
        cout<<res<<endl;
        
        

	

}
//--------------------EOSOLUTION---------------------------------