#include <iostream>
#define MAX_NUM 100
#define MAX_N 100
using namespace std;

int n;
int list[MAX_N];
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> list[i];
    }
    int max_count = 0;
    for(int i=1; i<=MAX_NUM; i++){
        int count = 0;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(abs(list[j]-i) == abs(list[k]-i)) count++;
            }
        }
        max_count = max(max_count,count);
    }
    cout << max_count;
    return 0;
}