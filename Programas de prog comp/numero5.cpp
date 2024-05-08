#include <bits/stdc++.h>

using namespace std;
vector<int> peld;
bool esPos(long long int energia){
    int d;
    for(int i = 1; i<peld.size();i++){
       d = peld[i]-peld[i-1];
       if(energia > d){
            continue;
       }
       if(energia == d){
            energia--;
            continue;
       }
       if(energia < d){
            energia = -500;
            break;
       }
    }
    return energia >= 0;
}
int main(){
    int tC;
    int n,el;
    long long int l,r,m;
    long long int mv;
    cin>>tC;
    //hola
    //segundo comentario
    //tercer comentario
    for(int tc =1; tc<= tC; tc++){
        peld.clear();
        peld.push_back(0);
        cin>>n;
        mv = 0;
        while (n--){
            cin>>el;
            mv = max(el-peld.back(),(int)mv);
            peld.push_back(el);
        }
        l =mv; r = mv+1;
        while(l<r){
            m = (l+r)/2;
            if(esPos(m)){
                r = m;
            }else{
                l = m+1;
            }
        }
        cout<<"Case "<<tc<<": "<<l<<endl;
    }
    return 0;
}
