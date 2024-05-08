#include "bits/stdc++.h"
using namespace std;

int main()
{
    int x,cont;
    string str;
    cin >> x;
    for(int i=0; i<32 ;i++){
        cont=pow(2,i);
        if (cont>x)
        {
            break;
        }
        
        str+='1';

    }
    for(int i=1;i<=str.size();i++){
        cont=pow(2,(str.size()-i));
        if (cont<=x)
        {
            x-=cont;
        }
        else
        {
            str[i-1]='0';
        }
        
    }
    cout<<str<<endl;
}