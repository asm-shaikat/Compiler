#include <iostream>
using namespace std;
int main(){
    cout << "How many test cases :" << endl;
    int num;
    cin>>num;
    cout << "Enter your input:" << endl;
    string str[num];
    cin.ignore();

    for(int i = 0; i<num; i++){
        getline(cin,str[i]);
    }
    for(int j=0; j<num; j++){
        if(str[j][0]=='/' && str[j][1]=='*' && str[j][str[j].length()-1]=='/' && str[j][str[j].length()-2]=='*'){
            cout<<j<<" is Multiple line comment"<<endl;
        }

        else if(str[j][0]=='/' && str[j][1]=='/')
            cout<<j<<" is Single line comment"<<endl;

        else
            cout<<j<<" is not valid"<<endl;
    }
    return 0;
}
