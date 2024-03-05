#include <iostream>
using namespace std;

int main() {
    int n, map[100];

    cin >> n;

    for(int i=0;i<n;i++) cin >> map[i];

    int answer = 0;

    for(int i=0;i<n-2;i++){
        int sum = 0;
        for(int j=i+2;j<n;j++){
            sum = map[i]+map[j];
        }
        answer = max(answer,sum);
    }
    cout << answer;



    return 0;
}