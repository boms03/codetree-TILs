#include <iostream>
#include <algorithm>
#define MAX_N 1001
using namespace std;

typedef struct{
    int p;
    int s;
    int sum;
} cost_info;

bool compare(const cost_info &a, const cost_info &b) {
    return a.sum < b.sum;
}

cost_info info[MAX_N];
int n, b;

int main() {
    cin >> n >> b;
    for(int i=0; i<n; i++){
        int p,s;
        cin >> p >> s;
        cost_info c;
        c.p = p;
        c.s = s;
        c.sum = p+s;
        info[i] = c;
    }

    sort(info, info+n, compare);

    int max_count = 0;
    for(int i=0;i<n;i++){
        int cost = info[i].p/2 + info[i].s;
        if(cost > b) continue;

        int count = 1;
        for(int j=0;j<n;j++){
            if(j==i) continue;
            if(cost + info[j].p + info[j].s > b) break;
            cost += info[j].p + info[j].s;
            count++;
        }
        max_count = max(max_count,count);
    }
    cout << max_count;
    return 0;
}