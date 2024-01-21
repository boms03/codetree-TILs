#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

// int n;
// int map[501][501];
// int visited[501][501];
// int dp[501][501];
// int dx[]={-1,1,0,0};
// int dy[]={0,0,-1,1};
// int mx=0;

// void dynamic_programming(int x, int y){
//     for(int i=0;i<4;i++){
//         int nx = x + dx[i];
//         int ny = y + dy[i];
//         if(nx<0||nx>=n||ny<0||ny>=n) continue;

//         if(map[ny][nx]>map[y][x]&&!visited[ny][nx]){
//             visited[ny][nx]=1;
//             dp[ny][nx]=max(dp[ny][nx],dp[y][x]+1);
//             mx=max(mx,dp[ny][nx]);
//             dynamic_programming(ny,nx);
//         }
//     }
// }

// void init(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             dp[i][j]=1;
//         }
//     }
// }

// int main() {
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin >> map[i][j];
//         }
//     }
//     init();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             memset(visited,0,sizeof(visited));
//             dynamic_programming(j,i);
//         }
//     }
//     cout << mx;
//     return 0;

// } -> dp 격자에서 어디서부터 시작하지? 작은문제는 어디서 시작?


// dp 갱신 순서를 작은 수로 설정하자!

int n;
int map[501][501];
int dp[501][501];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};


void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=1;
        }
    }
}

int main() {
    vector<tuple<int,int,int>>v;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
            v.push_back(make_tuple(map[i][j],j,i));
        }
    }
    init();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<4;j++){
            int x = get<1>(v[i]);
            int y = get<2>(v[i]);
            int nx = x + dx[j];
            int ny = y + dy[j];
            if(nx<0||nx>=n||ny<0||ny>=n) continue;
            if(map[ny][nx]>get<0>(v[i])){
                dp[ny][nx]=max(dp[ny][nx],dp[y][x]+1);
            }
        }
    }
    sort(v.begin(),v.end());
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mx=max(dp[i][j],mx);
        }
    }
    cout << mx;
    return 0;

}