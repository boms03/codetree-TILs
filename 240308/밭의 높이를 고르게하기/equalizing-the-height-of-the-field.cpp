#include <iostream>
#include <math.h>
#define MAX_N 100
#define MAX_H 100
using namespace std;

int n,h,t;
int arr[MAX_N];
int main() {
    cin >> n >> h >> t;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min_cost = 1e9;
    for(int i=0;i<n-t+1;i++){
        int cost = 0;
        for(int j=i;j<i+t;j++){
            cost += abs(arr[j]-h);
        }
        min_cost=min(min_cost,cost);
    }
    cout << min_cost;
    return 0;
}