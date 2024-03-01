#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<pair<int,int>>v;
    cin >> n;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    for(int i=0;i<=10;i++){
        for(int j=0;j<=10;j++){
            for(int k=0;k<=10;k++){ // x 3개, x 2개 y1개, x1개 y2개, y3개
                int cnt = 0;
                for(int e=0;e<v.size();e++){
                    if(v[e].first==i || v[e].first==j || v[e].first==k){
                        cnt++;
                    }
                }
                if(cnt==n){
                    cout << 1;
                    exit(0);
                }

                cnt = 0;
                for(int e=0;e<v.size();e++){
                    if(v[e].first==i || v[e].first==j || v[e].second==k){
                        cnt++;
                    }
                }
                if(cnt==n){
                    cout << 1;
                    exit(0);
                }

                cnt = 0;
                for(int e=0;e<v.size();e++){
                    if(v[e].first==i || v[e].second==j || v[e].second==k){
                        cnt++;
                    }
                }
                if(cnt==n){
                    cout << 1;
                    exit(0);
                }


                cnt = 0;
                for(int e=0;e<v.size();e++){
                    if(v[e].second==i || v[e].second==j || v[e].second==k){
                        cnt++;
                    }
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