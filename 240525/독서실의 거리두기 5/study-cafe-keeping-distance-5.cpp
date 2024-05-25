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
        int count_right = 0;
        int count_left = 0;
        if(i>0){
            for(int j=i-1;j>=0;j--){
                if(seat[j]=='1') break;
                count_left++;
            }
        
        if(i<n-1){
            for(int j=i+1;j<n;j++){
                if(seat[j]=='1') break;
                count_right++;
            }
        }
        max_count = max(max_count,max(count_right, count_left));
        seat[i] = '0';
    }
    cout << max_count;
    return 0;
}