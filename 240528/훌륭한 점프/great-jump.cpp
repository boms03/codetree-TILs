#include <iostream>
#define MAX_N 101
using namespace std;

int n,k;
int num[MAX_N];
int main() {
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    for(int i=max(num[0],num[n-1]);i<=MAX_N;i++){
        int last_idx = 0;
        bool flag = true;
        for(int j=0;j<n;j++){
            if(num[j]<=i){
                if(j-last_idx>k){
                    flag = false;
                    break;
                }
                last_idx = j;
            } 
        }
        if(flag){
            cout << i;
            break;
        }
    }

    return 0;
}