#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    for(int i=0;i<=10;i++){
        for(int j=0;j<=10;j++){
            for(int k=0;k<=10;k++){
                int cnt=0;
                if(i==j || j==k || i==k) continue;
                for(int j=0;j<n;j++){
                    if(i==v[j].first || j==v[j].first || k==v[j].first) cnt++;
                    if(i==v[j].second || j==v[j].second || k==v[j].second) cnt++;
                }
                if(cnt==n){
                    cout << 1;
                    exit(0);
                }
            }
        }
    }
    cout << 0;

    return 0;
}