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
	string str,str2,res,res2;
    int d,m,a,d2,m2,a2,resd,resm,resa,res2d,res2m,res2a,n;

    cin>>n;
    cin>>str>>d>>m>>a;
    res=str;
    resd=d;
    resm=m;
    resa=a;
    res2=str;
    res2d=d;
    res2m=m;
    res2a=a;
    while (--n)
    {
        cin>>str2>>d2>>m2>>a2;

        if (resa==a2)
        {
            if (resm==m2)
            {
                if (resd>d2)
                {
                    
                }
                else{
                    res=str2;
                    resd=d2;
                    resm=m2;
                    resa=a2;
                }
                
            }
            else if(resm>m2){

            }
            else{
                res=str2;
                resd=d2;
                resm=m2;
                resa=a2;
            }
            
        }
        else if(resa>a2){

        }
        else{
            res=str2;
            resd=d2;
            resm=m2;
            resa=a2;
        }


        if (res2a==a2)
        {
            if (res2m==m2)
            {
                if (res2d>d2)
                {
                    res2=str2;
                    res2d=d2;
                    res2m=m2;
                    res2a=a2;
                }
                else{
                    
                }
                
            }
            else if(res2m>m2){
                res2=str2;
                res2d=d2;
                res2m=m2;
                res2a=a2;
            }
            else{
                
            }
            
        }
        else if(res2a>a2){
            res2=str2;
            res2d=d2;
            res2m=m2;
            res2a=a2;
        }
        else{
            
        }
    }
    cout<<res<<endl;
    cout<<res2<<endl;

}
//--------------------EOSOLUTION---------------------------------