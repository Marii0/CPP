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
	string str1,str2,str3,res;
    string mayu="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin>>str1>>str2>>str3;

    for (int i = 0; i < str3.size(); i++)
    {   
        if (str3[i]=='A' || str3[i]=='B' || str3[i]=='C' || str3[i]=='D' || str3[i]=='E' || str3[i]=='F' || str3[i]=='G' || str3[i]=='H' || str3[i]=='I' ||str3[i]=='J' ||str3[i]=='K' ||str3[i]=='L' ||str3[i]=='M' ||str3[i]=='N' ||str3[i]=='O' ||str3[i]=='P' ||str3[i]=='Q' || str3[i]=='R' || str3[i]=='S' || str3[i]=='T' || str3[i]=='U' || str3[i]=='V' || str3[i]=='W' || str3[i]=='X' || str3[i]=='Y' || str3[i]=='Z')
        {
            for (int j = 0; j < 26; j++)
            {
                if (((str3[i])+32)==str1[j])
                {
                    res+=((str2[j])-32);
                }
                
            }   
        }
        else if(str3[i]=='0' || str3[i]=='1' || str3[i]=='2' || str3[i]=='3' || str3[i]=='4' || str3[i]=='5' || str3[i]=='6' || str3[i]=='7' ||str3[i]=='8' || str3[i]=='9'){
            res+=str3[i];
        }
        else{
            for (int j = 0; j < 26; j++)
            {
                if ((str3[i])==str1[j])
                {
                    res+=str2[j];
                }
                
            }  
        }
        
    }
    cout<<res;
    

}
//--------------------EOSOLUTION---------------------------------