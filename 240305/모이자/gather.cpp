#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    int map[101];
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> map[i];
    }

    int answer = 1e9;
    for(int i=1;i<=n;i++){
        int distance = 0;
        for(int j=1;j<=n;j++){
            if(i==j) continue;
            distance += map[j]*abs(j-i);
        }
        answer = min(answer,distance);
    }
    cout << answer;

    return 0;
}