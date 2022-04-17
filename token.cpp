#include<bits/stdc++.h>
using namespace std;
int main(){
char str[150];
int count=0;
gets(str);
cout<<"Token 1: ";
for(int i=0;i<strlen(str);i++){
if(str[i]==' '){
cout<<endl<<"Token "<<count++<<":";
}
else{
cout<<str[i];
}
}
return 0;
}