#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;
int main() {
    int x[MAX_N], y[MAX_N];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    int min_dist = 1000000;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            int dist = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            min_dist = min(min_dist,dist);
        }
    }
    cout<<min_dist;
    return 0;
}