#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    int n;
    string s;
    set<string>str;
    cin >> n;
    cin >> s;

    //모든 부분문자열 구하기
    for(int i=0;i<n;i++){
        string temp = ""+s[i];
        for(int j=0;j<n;j++){
            temp+=s[j];
            str.insert(temp);
        }
    }
    int ans = 0;
    for(auto& st: str){
        int cnt = 0;
        for(int i=0;i<n-st.length()+1;i++){
            if(st == s.substr(i,st.length())) cnt++;
        }
        if(cnt<2) ans++;
    }
    cout << ans;
}