#include <iostream>
#include <string.h>


using namespace std;

#define ll long long

 ll memo[49];

int fibo(ll n, ll f){
    // if n is memo, return memo[n]
    if(memo[n]!=-1){
        return memo[n];
    }
    else if(n==0){
        return n;
    }
    else if(n<=2){
        return 1;
    }
    else{
        f=fibo(n-1,f)+fibo(n-2,f);
        //memo[n]= f
        memo[n]=f;
        return memo[n];
    }

}

int main(){
    ll n;
    ll f;

    //memo {}
    memset(memo,-1, sizeof memo);

    cin>>n;

    cout<<fibo(n,f)<<endl;
    //el numero despues del 48 ya no cabe en un long long

}