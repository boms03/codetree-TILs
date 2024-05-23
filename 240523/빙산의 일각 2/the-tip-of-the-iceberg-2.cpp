#include <iostream>
#define MAX_N 101
#define MAX_H 1000
using namespace std;

int height[MAX_H];
int n;
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> height[i];
    }
    int max_count = 0;
    for(int i=1; i<=MAX_H; i++){
        int count = 0;

        // count if it starts with not sinked
        if(height[0]>i) count++;

        // count when sinked and not sinked are consecutively found
        for(int j=1; j<n; j++){
            if(height[j-1]<=i && height[j]>i) count++;
        }
        max_count = max(max_count,count);
        
    }
    cout << max_count;
    return 0;
}