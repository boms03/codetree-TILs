#include <iostream>
#include <vector>
#define PII pair<int, int>
using namespace std;


int main() {
    vector<PII>v;
    int n,x,y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    int minArea = 1e9;
    for(int i = 0; i < n; i++){
        int maxX = 0;
        int minX = 1e9;
        int maxY = 0;
        int minY = 1e9;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            int x = v[j].first;
            int y = v[j].second;
            maxX = max(x,maxX);
            minX = min(x,minX);
            maxY = max(y,maxY);
            minY = min(y,minY);
        }
        int area = (maxX-minX) * (maxY-minY);
        minArea = min(minArea,area);
    }
    cout << minArea;
    return 0;
}