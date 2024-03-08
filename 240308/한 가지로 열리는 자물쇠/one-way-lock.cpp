#include <iostream>
#include <math.h>
#define MAX_ARR 3
using namespace std;

int n;
int arr[MAX_ARR];

int main() {
    cin >> n;
    for(int i=0;i<MAX_ARR;i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                bool found = false;
                if(abs(arr[0]-i)<=2 || abs(arr[1]-j)<=2 || abs(arr[2]-k)<=2) found = true;
                if(found) cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}