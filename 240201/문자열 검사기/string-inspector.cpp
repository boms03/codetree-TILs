#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {

    stack<char>stk;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            stk.push('(');
        } else if(s[i]==')'){
            if(stk.top()=='('){
                stk.pop();
            }
        } else if(s[i]=='['){
            stk.push('[');
        } else if(s[i]==']'){ 
            if(stk.top()=='['){
                stk.pop();
            }
        }
    }
    if(stk.empty()) cout << 1;
    else cout << 0;
    return 0;
}