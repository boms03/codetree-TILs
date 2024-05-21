#include <iostream>
#define MAX_K 11
#define MAX_N 21
using namespace std;

int n,k;
int rnk[MAX_K][MAX_N];

int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            int number;
            cin >> number;
            rnk[i][number]=j;
        }
    }

    int count = 0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            if(i==j) continue;
            bool flag = true;
            for(int l=0;l<n;l++){
                if(rnk[l][i]>=rnk[l][j]){
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }
    }
    cout << count;
    return 0;
}