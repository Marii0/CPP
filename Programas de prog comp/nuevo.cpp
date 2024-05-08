#include "stdio.h"
#include "iostream"
#include "vector"
#include "algorithm"
#include "math.h"

using namespace std;

void resolve(){

    
}

int main() {
int a;
string str;
bool bol1=false, bol2=false, bol3=false;

cin>>a;

for (int i = 0; i < a; i++)
{
    bol1=false, bol2=false, bol3=false;
    cin>>str;
    if (str[0]=='y' || str[0]=='Y')
    {
        bol1=true;
    }
    else if(str[1]=='e' || str[1]=='E'){
        bol2=true;
    }
    else if(str[2]=='s' || str[2]=='S'){
        bol3=true;
    }

    if (bol1 && bol2 && bol3)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    str.clear();
    
}

}


/*int a;

cin>>a;

cout<<ceil(a/5);*/