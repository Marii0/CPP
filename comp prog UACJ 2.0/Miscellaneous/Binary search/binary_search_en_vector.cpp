#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
bool busquedabinaria(vector <int> vec, int numerobuscado){
    bool bol=false;
    int left, right, mid;
    sort(vec.begin(), vec.end());
    
    left= 0;
    right= vec.size()-1;

    while(left <= right){
        mid = (right +left)/2;
        if(vec[mid]==numerobuscado){
            bol=true;
            break;
        }
        if(numerobuscado < vec[mid]){
            right = mid -1;
        }
        else{
            left = mid+1;
        }
    }
    return bol;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

    int num,n,val;
    vector <int> vec;
    int bol;

    cin>>n;
    cin>>num;
    vec.clear();
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        vec.push_back(val);
    }
    bol=busquedabinaria(vec,num);
    if(bol){
        cout<<"se encontro";
    }
    else{
        cout<<"no se encontro";
    }
    

}