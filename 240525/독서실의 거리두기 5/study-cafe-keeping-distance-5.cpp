#include <iostream>
using namespace std;

string seat;
int n;
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> seat;
    }
    int max_count = 0;
    for(int i=0;i<n;i++){
        if(seat[i]=='1') continue;
        seat[i] = '1';
        bool flag = false;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(seat[j] == '1' && seat[k] == '1'){
                    max_count = max(max_count,k-j-1);
                    flag = true;
                }
                if(flag) break;
            }
        }
        seat[i] = '0';
    }
    cout << max_count;
    return 0;
}