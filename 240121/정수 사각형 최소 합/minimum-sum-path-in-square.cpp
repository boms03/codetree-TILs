#include <iostream>
using namespace std;
int main() {
    int n;
    int map[101][101];
    int dp[101][101];
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> map[i][j];
        }
    }
    dp[1][n]=map[1][n];

    for(int i=n-1;i>=1;i--){
        dp[1][i]=dp[1][i+1]+map[1][i];
    }
    for(int i=2;i<=n;i++){
        dp[i][n]=dp[i-1][n]+map[i][n];
    }

    for(int i=2;i<=n;i++){
        for(int j=n-1;j>=1;j--){
            dp[i][j]=min(dp[i-1][j],dp[i][j+1])+map[i][j];
        }
    }   
    cout << dp[n][1];
    return 0;
}