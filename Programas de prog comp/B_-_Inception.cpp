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
	int tC;
    string str, nom;
    vector <string> vec;

	cin >> tC;
    cin.ignore();
	while (tC--) {

        getline(cin, str);

        if(str[0]=='S'){
            for (int i = 6; i < str.size(); i++)
            {
                nom+=str[i];
            }
            vec.push_back(nom);
        }
        else if(str[0]=='T'){
            if(vec.size()==0){
                cout<<"Not in a dream"<<endl;
            }
            else{
              cout<<vec[vec.size()-1]<<endl;  
            }
            
        }
        else if(str[0]=='K'){
            if(vec.size()==0){
                
            }
            else{
                vec.pop_back();
            }
            
            
        }
        str.clear();
        nom.clear();

	}

}
//--------------------EOSOLUTION---------------------------------