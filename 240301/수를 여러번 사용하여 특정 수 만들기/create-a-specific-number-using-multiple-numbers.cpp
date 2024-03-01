#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    for(int i=0;i<=c;i++){
        int numA = a*i; // a쪽
        int remain = c-a*i; // 남은 수
        if(remain<0) continue;
        int multiB = remain/b; // 남은 수에서 b가 들어갈 수 있는 횟수
        ans = max(ans, multiB*b + numA);
    }
    cout << ans;
}