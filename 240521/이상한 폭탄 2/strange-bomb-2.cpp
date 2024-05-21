#include <iostream>
#define MAX_N 101
#define MAX_K 101
using namespace std;

int n,k;
int bomb[MAX_N];

int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> bomb[i];
    }

    int max_num = 0;
    for(int i=0;i<n;i++){
        int s = i-k;
        int e = i+k;
        if(s<0) s = 0;
        if(e>=n) e = n-1;
        for(int j = s; j<=e; j++){
            if(j==i) continue;
            if(bomb[j]==bomb[i]) max_num = max(max_num,bomb[i]);
        }
    }
    cout << max_num;
    return 0;
}