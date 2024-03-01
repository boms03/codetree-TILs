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
        int cnt=0;
        for(int j=0;j<n;j++){
            if(i==v[i].first) cnt++;
        }
        if(cnt==n){
            cout << 1;
            exit(0);
        }
    }
    for(int i=0;i<=10;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(i==v[i].second) cnt++;
        }
        if(cnt==n){
            cout << 1;
            exit(0);
        }
    }
    cout << 0;

    return 0;
}