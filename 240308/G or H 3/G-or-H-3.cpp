#include <iostream>
#include <algorithm>
#define MAX_NUM 10000

using namespace std;

int n,k;
int map[MAX_NUM+1];

int main() {
    
    cin >> n >> k;

    for(int i=0;i<n;i++){
        int idx; char alphabet;
        cin >> idx >> alphabet;
        
        if(alphabet=='G')
            map[idx] = 1;
        else
            map[idx] = 2;
    }

    int max_sum = 0;

    for(int i=1;i<=MAX_NUM-k;i++){

        int sum = 0;
        for(int j=i;j<=i+k;j++){
            sum=sum+map[j];
        }
        
        max_sum = max(max_sum,sum);
    }

    cout << max_sum;
    return 0;
}