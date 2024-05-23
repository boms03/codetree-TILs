#include <iostream>
#define MAX_N 1000
#define MAX_T 1000
using namespace std;

int n, c,h,g;
int Ta[MAX_N], Tb[MAX_N];

int main() {
    cin >> n >> c >> g >> h;
    for(int i=0; i<n; i++){
        cin >> Ta[i] >> Tb[i];
    }
    int max_count = 0;
    for (int i=0; i<MAX_T; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(Ta[j] > i){
                count += c;
            } else if(Ta[j] <= i && i <= Tb[j]){
                count += g;
            } else{
                count += h;
            }
        }
        max_count = max(max_count,count);
    }
    cout << max_count;
    return 0;
}