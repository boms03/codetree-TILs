#include <iostream>
#define MAX_T 101
#define MAX_AB 1000
using namespace std;

typedef struct{
    int x;
    char alphabet;
} info;

info Info[MAX_T];
int t,a,b;
int main() {
    cin >> t >> a >> b;
    for(int i=0;i<t;i++){
        cin >> Info[i].alphabet >> Info[i].x;
    }
    int answer= 0;
    for(int i=a;i<=b;i++){
        // find the nearest S and N 
        int nearest_S = MAX_AB;
        int nearest_N = MAX_AB;
        for(int j=0; j<t; j++){
            if(Info[j].alphabet == 'S'){
                nearest_S = min(nearest_S,abs(Info[j].x-i));
            } else{
                nearest_N = min(nearest_N,abs(Info[j].x-i));
            }
        }
        if(nearest_S<=nearest_N) answer++;
    }
    cout << answer;
    return 0;
}