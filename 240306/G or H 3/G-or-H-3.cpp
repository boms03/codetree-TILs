#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    char map[10001];
    int maxIdx=0;

    for(int i=0;i<n;i++){
        int idx;
        char alphabet;
        cin >> idx >> alphabet;
        map[idx] = alphabet;
        maxIdx=max(maxIdx,idx);
    }

    int answer = 0;

    for(int i=1;i<=maxIdx-k;i++){
        int sum = 0;
        for(int j=i;j<=i+k;j++){
            if(map[j]=='G') sum++;
            else if(map[j]=='H') sum+=2;
        }
        answer = max(answer,sum);
    }
    cout << answer;

    
    return 0;
}