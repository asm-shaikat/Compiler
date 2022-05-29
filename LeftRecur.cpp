// #include<iostream>
// using namespace std;
// int main(){
//     string x;
//     cout<<"Enter expression\n";
//     cin>>x;
//     int len=x.length();
//     if (x[0] == x[3]){
//         cout<<"Left recursion"<<endl;
//         return 0;
//     }
//     if((x[0] != x[3]) && (x[4]=='|')){
//         for(int i=4;i<=x.length();i++){
//             if(x[i]=='|' && x[i+1]==x[0]){
//                 cout<<"Left recursion"<<endl;
//                 return 0;
//             }
//             else if (x[i]!='|' && x[i+1]!=x[0]) {
//                 cout<<"Not a left recursion"<<endl;
//                 return 0;
//             }

//         }
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    string a;
    cout<<"Enter a Production Rule: ";
    cin>>a;
    int n=0;
    if(a[0]==a[3])
        cout<<endl<<"Left Recursion.";
    else{
        for(int i=4; i<a.length(); i++){
            if(a[i]=='|'){
                if(a[i+1]==a[0])
                    n++;
            }
        }
        if(n==0)
            cout<<"Not Left Recursion."<<endl;
        else
            cout<<"Left Recursion.";
    }

    return 0;
}
