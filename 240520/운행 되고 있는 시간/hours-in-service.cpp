#include <iostream>
#define MAX_N 100
#define MAX_NUM 1001
using namespace std;

int s[MAX_N], e[MAX_N];
int n;

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i] >> e[i];
    }
    int max_time = 0;
    for(int i=0;i<n;i++){
        int count[MAX_NUM]={0,};
        for(int j=0;j<n;j++){
            if(j==i) continue;
            for(int t=s[j];t<e[j];t++){
                count[t]=1;
            }
        }
        int time = 0;
        for(int k=1;k<MAX_NUM;k++){
            if(count[k]) time++;
        }
        max_time=max(max_time,time);
    }
    cout << max_time;
    return 0;
}