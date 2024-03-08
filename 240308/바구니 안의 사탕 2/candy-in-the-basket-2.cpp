#include <iostream>
#define MAX_N 100
#define MAX_K 200
using namespace std;

int n,k;
int arr[MAX_N+1];

int main() {
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int idx, candy;
        cin >> candy >> idx;
        arr[idx]+=candy;
    }

    int max_cnt = 0;

    // 모든 시작점을 탐색하기: 구간은 [시작,시작+2*K]
    for(int i=0;i<=MAX_N-2*k;i++){
        int cnt = 0;
        for(int j=0;j<=2*k;j++){
            cnt += arr[i+j];
        }
        max_cnt = max(max_cnt,cnt);
    }
    cout << max_cnt;
    return 0;
}