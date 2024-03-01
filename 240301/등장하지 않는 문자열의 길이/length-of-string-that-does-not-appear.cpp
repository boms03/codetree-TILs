#include <iostream>
#include <string>
#include <set>
#include <algorithm>
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
        str.insert(temp);
        for(int j=0;j<n;j++){
            temp+=s[j];
            str.insert(temp);
        }
    }
    int ans = 100;
    for(auto& st: str){
        int cnt = 0;
        int len = st.length();
        for(int i=0;i<n-len+1;i++){
            if(st == s.substr(i,len)) cnt++;
        }
        if(cnt<2) ans=min(ans,len);
    }
    cout << ans;
}