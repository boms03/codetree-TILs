#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

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
    sort(v.begin(),v.end());
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
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mx=max(dp[i][j],mx);
        }
    }
    cout << mx;
    return 0;

}