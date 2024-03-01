#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<pair<int,int>>map;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        map.push_back({x,y});
    }
    int ans = 101;
    for(int y=1;y<=100;y++){
        for(int x=1;x<=100;x++){
            int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
            for(int i=0;i<n;i++){
                //위오른
                if(map[i].first>x && map[i].second>y){
                    cnt1++;
                }
                //위왼
                if(map[i].first<x && map[i].second>y){
                    cnt2++;
                }
                //아래오른
                if(map[i].first>x && map[i].second<y){
                    cnt3++;
                }
                //아래왼
                if(map[i].first<x && map[i].second<y){
                    cnt4++;
                }
            }
            ans = min(ans,max(cnt1,max(cnt2,max(cnt3,cnt4))));
        }
    }
    cout << ans;
    return 0;
}