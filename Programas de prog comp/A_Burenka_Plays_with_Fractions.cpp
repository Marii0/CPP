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
	int tC,a=0,b=0,c=0,d=0;
    float diva,divb;

	cin >> tC;
	while (tC--) {
        cin>>a>>b>>c>>d;
        diva=(float)a/(float)b;
        divb=(float)c/(float)d;

        if (diva==divb || (a==0 & b==0 & c==0 & d==0) || (a!=0 & b==0 & c==0 & d==0) || (a==0 & b!=0 & c==0 & d==0) || (a==0 & b==0 & c!=0 & d==0) || (a==0 & b==0 & c==0 & d!=0) || (b==0) || (d==0))
        {
            cout<<"0"<<endl;
        }
        else
        {
            if ((a==0 && c!=0) || (b==0 && d!=0) || (a!=0 && c==0) || (b!=0 && d==0))
            {
                cout<<"1"<<endl;
            }else
            {
                if (diva>divb)
                {
                    if ((c%a==0 || d%b==0) && (a!=1 || c!=1))
                    {
                        cout<<"1"<<endl;
                    }else
                    {
                        cout<<"2"<<endl;
                    }
                    
                }
                
                if (divb>diva)
                {
                    if ((a%c==0 || b%d==0) && (b!=1 || d!=1))
                    {
                        cout<<"1"<<endl;
                    }else
                    {
                        cout<<"2"<<endl;
                    }
                }
                
                
            }
            
        }
        
        
        

	}

}
//--------------------EOSOLUTION---------------------------------