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

    // // 범위 자체가 벗어나도 [0,100] 사이에 있는 것을 구해야한다
    // for(int i=0;i<=MAX_N-2*k;i++){
    //     int cnt = 0;
    //     for(int j=0;j<=2*k;j++){
    //         cnt += arr[i+j];
    //     }
    //     max_cnt = max(max_cnt,cnt);
    // }
    // cout << max_cnt;

    // 중심
    for(int i=0;i<=MAX_N;i++){
        int cnt = 0;
        for(int j=i-k;j<=i+k;j++){
            if(j>=0 && j<=MAX_N) cnt += arr[j];
        }
        max_cnt = max(max_cnt,cnt);
    }
    cout << max_cnt;
    return 0;
}