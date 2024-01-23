#include <iostream>
#include <cmath>
using namespace std;

int dp[101][101];
int map[101][101];
int n;

int solve(int lower_bound){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(map[i][j]<lower_bound){
                map[i][j]=1e9;
            }
            dp[i][j] = max(min(dp[i-1][j],dp[i][j-1]),map[i][j]);
        }
    }
    return dp[n-1][n-1];
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j]=1e9;
        }
    }

    dp[0][0]=map[0][0];

    for(int i=1; i<n;i++){
        dp[0][i] = max(dp[0][i-1],map[0][i]);
    }

    for(int i=1; i<n;i++){
        dp[i][0] = max(dp[i-1][0],map[i][0]);
    }

    int ans = 1e9;

    for(int lower_bound=1; lower_bound<100; lower_bound++){
        int upper_bound = solve(lower_bound);
        if(upper_bound==1e9) continue;
        
        ans = min(ans,upper_bound-lower_bound);

    }
    cout << ans;

    return 0;
}