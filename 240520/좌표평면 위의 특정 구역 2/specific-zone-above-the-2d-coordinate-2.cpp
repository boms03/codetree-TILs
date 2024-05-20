#include <iostream>
#include <vector>
#include <climits>
#define PII pair<int, int>
#define MAX_NUM 40000
#define MAX_N 100
using namespace std;


int main() {
    vector<PII>v;
    int n,x,y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    int min_area = INT_MAX;

    for(int i = 0; i < n; i++){
        int max_x = 1;
        int min_x = MAX_NUM;
        int max_y = 1;
        int min_y = MAX_NUM;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            int x = v[j].first;
            int y = v[j].second;
            max_x = max(x,max_x);
            min_x = min(x,min_x);
            max_y = max(y,max_y);
            min_y = min(y,min_y);
        }
        int area = (max_x-min_x) * (max_y-min_y);
        min_area = min(min_area,area);
    }
    cout << min_area;
    return 0;
}