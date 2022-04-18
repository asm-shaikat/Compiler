#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int Postfix(string  post_exp){
    stack <int> stack;
    int len = post_exp.length();
    for (int i = 0; i < len; i++){
        if ( post_exp[i] >= '0' &&  post_exp[i] <= '9'){
            stack.push( post_exp[i]- '0');
        }
        else{
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();

            switch (post_exp[i]){
                case '+': 
                          stack.push(b + a);
                          break;
                case '-': 
                          stack.push(b - a);
                          break;
                case '*': 
                          stack.push(b * a);
                          break;
                case '/': 
                          stack.push(b / a);
                          break;
                case '^': 
                          stack.push(pow(b,a));
                          break;
            }
        }
    }
    return stack.top();
}

int main(){
    string postfix_expression = "23*4+";
    cout<<"After calculating the postfix expression is : ";
    cout<<Postfix(postfix_expression);
    return 0;
}