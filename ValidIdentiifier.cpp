#include<bits/stdc++.h>
using namespace std;
int main(){
    string var;
    int StringCount=0;
    cout<<"Enter a string:";
    cin>>var;
    if((var[0]>='a' && var[0]<='z')||(var[0]>='A' && var[0]<='Z')||(var[0]=='_')){
        for (int i = 1; i <=var.length(); i++)
        {
            if((var[i]>='a' && var[i]<='z')||(var[i]>='A' && var[i]>='Z')||(var[i]>=0 && var[i]<=9)||(var[i]=='_')){
                StringCount++;
            }        
        }
        if(StringCount==var.length()){
            cout<<var<<" is valid identifier"<<endl;
            return 0;
        }
        else{
            cout<<var<<" is not a valid identifier"<<endl;
        }
        
    }
    cout<<var<<" is not a valid identifier"<<endl;
}