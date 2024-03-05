#include <iostream>
using namespace std;

int main() {
    int n;
    int map[20][20];

    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }

    int answer = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            answer = max(answer,map[i][j]+map[i][j+1]+map[i][j+2]);
        }
    }

    cout << answer;

    return 0;
}