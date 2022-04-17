#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,cnt;
    cout<<"How many test cases"<<endl;
    cin>>num;
    string inp[num];
    cout<<"Enter string"<<endl;
    cin.ignore();
    for (i = 0;i <num;i++){
        getline(cin,inp[i]);
    }
     for(int j=0; j<num; j++){
        cnt =1;
        if(inp[j][0]=='_' || inp[j][0]>='A' && inp[j][0]<='Z' || inp[j][0]>='a' && inp[j][0]<='z' ){
            for(int i=0; i<inp[j].length(); i++){
                if(inp[j][i] == ' '){
                    cnt = 0;
                    cout<<"The ing "<<j<<" is not valid"<<endl;
                    break;
                }
            }
            if(cnt)
                cout<<"The String "<< j<<" is valid"<<endl;
        }
        else
            cout<<"The String "<<j<<" is not valid"<<endl;
    }
}