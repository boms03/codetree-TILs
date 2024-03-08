#include <iostream>
#include <algorithm>
#define MAX_N 100
#define MAX_M 100
using namespace std;

int n,m;
int arr_n [MAX_N];
int arr_m [MAX_M];
int temp [MAX_M];

int main() {

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> arr_n[i];
    }
    for(int i=0;i<m;i++){
        cin >> arr_m[i];
    }

    sort(arr_m,arr_m + m);

    int cnt = 0;
    for(int i=0;i<n-m+1;i++){
        for(int j=0;j<m;j++){
            temp[j] = arr_n[i+j];
        }
        sort(temp,temp+m);

        bool match = true;
        for(int k=0;k<m;k++){
            if(temp[k]!=arr_m[k]){
                match = false;
                break;
            }
        }
        if(match) cnt ++;
    }
    cout << cnt;
    return 0;
}