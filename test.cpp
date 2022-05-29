#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "How many test cases :" << endl;
    int num;
    cin>>num;
    string str;
    cin.ignore();
    for(int i = 0; i<num; i++){
        cout << "Enter your input: ";
        getline(cin,str);
    int count=1;
    cout<<"Token "<<count++<<":";
        for (int i = 0; i<str.length(); i++){
            if (str[i] == ' '){
                cout << endl
                     << "Token " << count++ << ":";
            }
            else{
                cout << str[i];
            }
        }
        cout << endl;
    
    }
    return 0;
}
