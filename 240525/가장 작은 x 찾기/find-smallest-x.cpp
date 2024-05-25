#include <iostream>
#define MAX_N 11
#define MAX_AB 10000
using namespace std;

int n;
int a[MAX_N], b[MAX_N];
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    int answer = MAX_AB;
    for(int x=0; x<MAX_AB; x++){
        int next_x = x;
        bool complete = true;
        for(int i=0; i<n; i++){
            if(next_x*2>=a[i] && next_x*2<=b[i]) next_x = next_x*2;
            else complete = false;
        }
        if(complete) answer = min(answer,x);
    }
    cout << answer;
    return 0;
}