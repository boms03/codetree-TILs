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

    int answer=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            for(int k=0;k<n;k++){
                for(int l=0;l<n-2;l++){
                    if(i==k && j+2>=l) continue;
                    int sum = map[i][j]+map[i][j+1]+map[i][j+2]+map[k][l]+map[k][l+1]+map[k][l+2];
                    answer = max(answer,sum);
                }
            }
        }
    }
    cout << answer;
    return 0;
}