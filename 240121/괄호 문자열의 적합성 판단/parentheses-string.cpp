#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> stk;
    string ans = "Yes";
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            stk.push(s[i]);
        } else{
            if(stk.empty()){
                ans= "No";
                break;
            } else if(stk.top()=='('){
                stk.pop();
            }
        }
    }
    if(!stk.empty()) ans="No";
    cout << ans;
    return 0;
}