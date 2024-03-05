#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='(') continue;
        for(int j=i+1;j<s.size();j++){
            if(s[j]==')') cnt++;
        }
    }
    cout << cnt;
    return 0;
}