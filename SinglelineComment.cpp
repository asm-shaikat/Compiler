#include<bits/stdc++.h>
using namespace std;
int main(){
    string var;

    cout<<"Enter string:";
    cin>>var;
    if(var[0]=='/' && var[1]=='/'){
        cout<<"Single line comment";
    }
    else{
        cout<<"Not a single line comment";
    }
    
}