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
        int consecutive = 0;
        int count = 0;
        for(int j=0; j<n; j++){
            // sinked
            if(height[j]<=i){
                if(consecutive>0){
                    consecutive=0;
                    count++;
                }
            } else consecutive++;
        }
        if(consecutive>0) count++;

        max_count = max(max_count,count);
    }
    cout << max_count;
    return 0;
}