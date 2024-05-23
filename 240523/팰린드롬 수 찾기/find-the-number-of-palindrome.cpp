#include <iostream>
#include <string>
using namespace std;
int x,y;
int main() {
    cin >> x >> y;
    int answer = 0;
    for(int i=x; i<=y; i++){
        string s = to_string(i);
        int l = 0;
        int r = s.length()-1;
        bool palindrom = true;
        while(l<=r){
            if(s[l]!=s[r]){
                palindrom = false;
                break;
            }
            l++;
            r--;
        }
        if(palindrom) answer++;
    }
    cout << answer;
    return 0;
}