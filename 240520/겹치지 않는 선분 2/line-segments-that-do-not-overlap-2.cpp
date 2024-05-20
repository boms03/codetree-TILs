#include <iostream>
#define MAX_N 100
#define MAX_NUM 1e6
#define MIN_NUM -1e6
using namespace std;

int s[MAX_N], e[MAX_N];
int n;

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i] >> e[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if((s[i]<s[j] && e[j]<e[i])||(s[j]<s[i] && e[i]<e[j])) break;
            if(j==n-1) count++;
        }
    }
    cout << count;
    return 0;
}