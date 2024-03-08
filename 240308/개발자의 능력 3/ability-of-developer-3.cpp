#include <iostream>
#define MAX_ARR 6
using namespace std;

int arr[MAX_ARR];

int main() {
    int total_sum = 0;
    for(int i=0;i<MAX_ARR;i++){
        cin >> arr[i];
        total_sum+=arr[i];
    }

    int min_diff = 1e9;

    for(int i=0;i<MAX_ARR;i++){
        for(int j=i+1;j<MAX_ARR;j++){
            for(int k=j+1;k<MAX_ARR;k++){
                int sum = arr[i]+arr[j]+arr[k];
                min_diff = min (min_diff, abs(total_sum-sum-sum));
            }
        }
    }
    cout << min_diff;
    return 0;
}