#include <iostream>
#define MAX_N 20
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
        int count = MAX_N;
        for(int j=0;j<n;j++){
            bool flag = false;
            for(int k=j+1;k<n;k++){
                if(seat[j] == '1' && seat[k] == '1'){
                    count = min(count,k-j);
                    flag = true;
                }
                if(flag) break;
            }
        }
        max_count = max(max_count,count);
        seat[i] = '0';
    }
    cout << max_count;
    return 0;
}