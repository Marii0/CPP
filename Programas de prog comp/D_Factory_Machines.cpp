#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
typedef long long int ll;
    vector <ll> vec;

ll busquedabinaria(int numerobuscado){
    ll left, right, mid;
    
    left= 1;
    right= 1e18;
    //hola
    while(left < right){
        mid = (right +left)/2;
        ll productos=0;
        for (int i = 0; i < vec.size(); i++)
        {
            productos+=min(mid/vec[i],(ll)1e9);
        }
        if(productos>=numerobuscado){
            right=mid;
        }
        else{
            left = mid+1;
        }
    }
    
    return left;
}

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    int num,n,val;

    cin>>n;
    cin>>num;
    vec.clear();
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        vec.push_back(val);
    }
    cout<<busquedabinaria(num);
    

}