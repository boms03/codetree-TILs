#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    char map[101];
    int maxIdx = 0;
    for(int i=0;i<n;i++){
        int idx;
        char alphabet;
        cin >> idx >> alphabet;
        map[idx] = alphabet;
        maxIdx = max(maxIdx,idx);
    }

    int answer = 0;
    for(int i=1;i<=maxIdx-k+1;i++){
        int sum = 0;
        for(int j=0;j<=k;j++){
            if(map[i+j]=='G') sum++;
            else if(map[i+j]=='H') sum+=2;
        }
        answer = max(answer,sum);
    }
    cout << answer;

    
    return 0;
}