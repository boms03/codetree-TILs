#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int n;
    string s;
    set<string>str[100];
    cin >> n;
    cin >> s;

    //모든 부분문자열 구하기
    for(int i=0;i<n;i++){
        string temp;
        temp+=s[i];
        str[1].insert(temp);
        for(int j=i+1;j<n;j++){
            temp+=s[j];
            str[temp.length()].insert(temp);
        }
    }
    int ans = 100;
    for(int k=1;k<n;k++){
        bool complete = false;
        for(auto& st: str[k]){
            int cnt = 0;
            int len = st.length();
            for(int i=0;i<n-len+1;i++){
                if(st == s.substr(i,len)){
                    // cout << st << " " << s.substr(i,len) << endl;
                    cnt++;
               }
            }
            if(cnt>=2){
                complete = true;
                break;
            }
        }
        if(!complete){
            cout << k;
            exit(0);
        }
    }
}