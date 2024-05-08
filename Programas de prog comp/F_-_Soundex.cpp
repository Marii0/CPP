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
	string str,res;
    map <char,int> mp;

    cin>>str;

    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }

    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>=2){
            it->second=2;
        }
    }
    
    
    
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V'){
            for (auto it = mp.begin(); it!=mp.end(); it++)
            {
                if(it->first==str[i] && it->second!=0){
                    res+='1';
                    mp[str[i]]--;
                }
            }

        }
        else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z'){
            for (auto it = mp.begin(); it!=mp.end(); it++)
            {
                if(it->first==str[i] && it-> second!=0){
                    res+='2';
                    mp[str[i]]--;
                
                }
            }

        }
        else if(str[i]=='D' || str[i]=='T'){
            for (auto it = mp.begin(); it!=mp.end(); it++)
            {
                if(it->first==str[i] && it-> second!=0){
                    res+='3';
                   mp[str[i]]--;
                }
            }

        }
        else if(str[i]=='L'){
            for (auto it = mp.begin(); it!=mp.end(); it++)
            {
                if(it->first==str[i] && it-> second!=0){
                    res+='4';
                    mp[str[i]]--;
                }
            }

        }
        else if(str[i]=='M' || str[i]=='N' ){
            for (auto it = mp.begin(); it!=mp.end(); it++)
            {
                if(it->first==str[i] && it-> second!=0){
                    res+='5';
                    mp[str[i]]--;
                }
            }

        }
        else if(str[i]=='R' ){
            for (auto it = mp.begin(); it!=mp.end(); it++)
            {
                if(it->first==str[i] && it-> second!=0){
                    res+='6';
                    mp[str[i]]--;
                }
            }

        }
        
        
        
    
    }
    
    

    
    cout<<res<<endl;
    

}
//--------------------EOSOLUTION---------------------------------