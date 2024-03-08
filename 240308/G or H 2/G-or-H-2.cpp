#include <iostream>
#define MAX_N 100
using namespace std;

int n;
char arr[MAX_N+1];

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        int idx;
        char alphabet;
        cin >> idx >> alphabet;
        if(alphabet=='G') arr[idx]=1;
        else arr[idx]=2;
        arr[idx] = alphabet;
    }
    int max_len = 0;
    for(int i = 0; i<=MAX_N;i++){
        for(int j=i+1;j<=MAX_N;j++){
            if(arr[i]==0 || arr[j]==0)continue;
            int cnt_g = 0;
            int cnt_h = 0;
            for(int k=i;k<=j;k++){
                if(arr[k]=='G') cnt_g++;
                if(arr[k]=='H') cnt_h++;
            }
            if(cnt_g!=0 && cnt_h!=0 && cnt_g==cnt_h){
                int len = j-i;
                max_len = max(max_len,len);
            }
        }
    }
    cout << max_len;
    return 0;
}