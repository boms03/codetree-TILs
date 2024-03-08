#include <iostream>
#include <algorithm>
#define MAX_N 100
#define MAX_M 100
using namespace std;

int n,m;
int arr_n [MAX_N];
int arr_m [MAX_M];

int main() {

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> arr_n[i];
    }
    for(int i=0;i<m;i++){
        cin >> arr_m[i];
    }

    int cnt_all = 0;
    do{
        // 시작
        for(int i=0;i<n-m+1;i++){
            int cnt = 0;
            // m개 만큼
            for(int j=0;j<m;j++){
                if(arr_n[i+j]==arr_m[j]) cnt++;
            }

            if(cnt==m) cnt_all++;
        }
    } while(next_permutation(arr_m,arr_m+m));

    cout << cnt_all;
    return 0;
}