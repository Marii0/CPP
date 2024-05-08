#include "bits/stdc++.h"

using namespace std;

int fibo(int n, int f){
    if(n<=2){
        return 1;
    }
    else{
        f=fibo(n-1, f)+fibo(n-2, f);
        return f;
    }
}

int main(){
    int n;
    int f;

    cin>>n;

    cout<<fibo(n,f)<<endl;

}