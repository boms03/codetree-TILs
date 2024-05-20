#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

int x[MAX_N], y[MAX_N];
int n;

int dist(int i,int j){
    return (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
}
int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    int min_dist = 1000000;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            min_dist = min(min_dist,dist(i,j));
        }
    }
    cout<<min_dist;
    return 0;
}