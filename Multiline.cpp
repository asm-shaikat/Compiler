#include<bits/stdc++.h>
using namespace std;
int main(){
    string var;
    cout<<"Enter multiline comment:";
    cin>>var;
    int x=var.length();
    if (var[0] == '/' && var[1] == '*' && var[x - 1] == '/' && var[x - 2] == '*')
    {
        cout << "Multiline comment";
    }
    else
    {
        cout << "Not a multiline comment";
    }
}