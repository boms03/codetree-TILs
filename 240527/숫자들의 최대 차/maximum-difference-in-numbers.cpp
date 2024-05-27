#include <iostream>
#define MAX_N 1001
#define MAX_K 10001
using namespace std;

int num[MAX_N];
int n,k;
int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int answer = 0;
    for(int i=0; i<=MAX_K; i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(num[j]>=i && num[j]<=i+k) count++;
        }
        answer = max(answer,count);
    }
    cout << answer;

    return 0;
}