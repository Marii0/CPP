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
	string str;
	map <char, int> mp;
	vector <int> vec;
	while(getline(cin, str)){
        mp.clear();
		vec.clear();
		for (int i = 0; i < str.size(); i++)
		{
			if(str[i]=='A' || str[i]=='B' || str[i]=='C' || str[i]=='D' || str[i]=='E' || str[i]=='F' || str[i]=='G' || str[i]=='H' || str[i]=='I' ||str[i]=='J' ||str[i]=='K' ||str[i]=='L' ||str[i]=='M' ||str[i]=='N' ||str[i]=='O' ||str[i]=='P' ||str[i]=='Q' || str[i]=='R' || str[i]=='S' || str[i]=='T' || str[i]=='U' || str[i]=='V' || str[i]=='W' || str[i]=='X' || str[i]=='Y' || str[i]=='Z' || str[i]=='a' || str[i]=='b' || str[i]=='c' || str[i]=='d' || str[i]=='e' || str[i]=='f' || str[i]=='g' || str[i]=='h' || str[i]=='i' ||str[i]=='j' ||str[i]=='k' ||str[i]=='l' ||str[i]=='m' ||str[i]=='n' ||str[i]=='o' ||str[i]=='p' ||str[i]=='q' || str[i]=='r' || str[i]=='s' || str[i]=='t' || str[i]=='u' || str[i]=='v' || str[i]=='w' || str[i]=='x' || str[i]=='y' || str[i]=='z'){
				mp[str[i]]++;
			}
			
		}

		for (auto it = mp.begin(); it!= mp.end(); it++)
		{
			vec.push_back(it->second);
		}
		sort(vec.begin(),vec.end());
		for (auto it = mp.begin(); it!= mp.end(); it++)
		{
			if(it->second==vec[vec.size()-1]){
				cout<<it->first;
			}
		}
		cout<<' '<<vec[vec.size()-1]<<endl;
		
    }

}
//--------------------EOSOLUTION---------------------------------