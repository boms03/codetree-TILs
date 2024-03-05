#include <iostream>
#include <vector>
using namespace std;
typedef pair<int,int> pii;

int main() {
    vector<pii>v;
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    int answer = 1e9;
    // 건너뛸 점 선택
    for(int i=1;i<n-1;i++){
        int dist = 0;
        int prev = 0;
        for(int j=1;j<n;j++){
            if(j==i) continue;
            dist += abs(v[prev].first - v[j].first) + abs(v[prev].second - v[j].second);
            prev = j;
        }
        answer = min(answer,dist);
    }
    cout << answer;
    return 0;
}