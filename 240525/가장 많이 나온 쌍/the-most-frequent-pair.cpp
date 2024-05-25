#include <iostream>
#define MAX_N 10
#define MAX_M 100
using namespace std;

int n,m;
int a[MAX_N], b[MAX_N];
int main() {
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a[i] >> b[i];
    }
    int max_count = 0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            int count = 0;
            for(int k=0; k<m; k++){
                if(a[k]==i && b[k]==j) count++;
                if(a[k]==j && b[k]==i) count++;
            }
            max_count = max(max_count,count);
        }
    }
    cout << max_count;
    return 0;
}