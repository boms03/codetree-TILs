#include <iostream>
#define MAX_K 11
#define MAX_N 11
using namespace std;

int n,k;
int rnk[MAX_K][MAX_N];

int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin >> rnk[i][j];
        }
    }
    int count = 0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            if(i==j) continue;
            bool check1 = true;
            for(int l=0;l<n;l++){
                bool found_i = false;
                bool found_j = false;
                bool check2 = false;
                for(int m=0;m<k;m++){
                    if(!found_i && !found_j && rnk[l][m] == i) found_i = true;
                    if(found_i && !found_j && rnk[l][m] == j) found_j = true;
                    if(found_i && found_j){
                        check2 = true;
                        break;
                    }
                }
                if(!check2){
                    check1 = false;
                    break;
                }
            }
            if(check1) count++;
        }
    }
    cout << count;
    return 0;
}