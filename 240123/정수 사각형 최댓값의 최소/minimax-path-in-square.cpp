#include <iostream>
using namespace std;

int main() {
    int dp[100][100];
    int map[100][100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    dp[0][0]=map[0][0];
    for(int i=1;i<n;i++){
        dp[i][0] = max(dp[i-1][0],map[i][0]);
    }

    for(int i=1;i<n;i++){
        dp[0][i] = max(dp[0][i-1],map[0][i]);
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=max(min(dp[i-1][j],dp[i][j-1]),map[i][j]);
        }
    }

    cout << dp[n-1][n-1];
    
    return 0;
}