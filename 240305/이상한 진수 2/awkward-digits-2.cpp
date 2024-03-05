#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]='1';
            break;
        }
    }
    if(i==s.size()){
        s[s.size()-1]='0';
    }
    int num = 0;
    for(int i=0;i<s.size();i++){
        num+=(s[s.size()-i-1]-'0')*pow(2,i);
    }

    cout << num;

    return 0;
}