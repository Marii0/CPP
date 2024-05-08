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
	int tC,n,cont;
    bool error;

	cin >> tC;
	while (tC--) {
        cin>>n;
        if (n==1)
        {
            cout<<1<<endl;
            cout<<"1 2"<<endl;
        }
        else if(n==2){
            cout<<1<<endl;
            cout<<"2 6"<<endl;
        }
        else{
            error=true;
            cont=1;
            if (n%2==0 && n>2)
            {
                cout<<n-2<<endl;
                for (int i = 0; i < n-2; i++)
                {
                    if (error)
                    {
                        cout<<cont<<' ';
                        cont+=4;
                        error=false;
                    }
                    else if(i==n-1){
                        cout<<cont;
                    }
                    else{
                        cout<<cont<<endl;;
                        cont++;
                        error=true;
                    }
                    
                }
            }
            else{
                cout<<n-1<<endl;
                for (int i = 0; i < n-1; i++)
                {
                    if (error)
                    {
                        cout<<cont<<' ';
                        cont+=4;
                        error=false;
                    }
                    else if(i==n-1){
                        cout<<cont;
                    }
                    else{
                        cout<<cont<<endl;;
                        cont++;
                        error=true;
                    }
                    
                }
            }
            
        }
        

	}

}
//--------------------EOSOLUTION---------------------------------