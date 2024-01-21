#include <iostream>
#include <cstring>
using namespace std;

int n;
int map[501][501];
int visited[501][501];
int dp[501][501];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int mx=0;

void dynamic_programming(int x, int y){
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<0||nx>=n||ny<0||ny>=n) continue;

        if(map[ny][nx]>map[y][x]&&!visited[ny][nx]){
            visited[ny][nx]=1;
            dp[ny][nx]=max(dp[ny][nx],dp[y][x]+1);
            mx=max(mx,dp[ny][nx]);
            dynamic_programming(ny,nx);
        }
    }
}

void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=1;
        }
    }
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    init();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            memset(visited,0,sizeof(visited));
            dynamic_programming(j,i);
        }
    }
    cout << mx;
    return 0;

}