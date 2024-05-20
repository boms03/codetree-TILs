#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

int p[MAX_N];
int n,b;
int main() {
    cin >> n >> b;

    int sum = 0;

    for(int i=0;i<n;i++){
        cin >> p[i];
        sum += p[i];
    }

    if(sum<=b){
        cout << n;
        return 0;
    }
    
    sort(p,p+n);

    int max_count = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        int total = p[i]/2;
        if(total>b) continue;
        for(int j=0;j<n;j++){
            if(j==i) continue;
            if(total+p[i]>b) break;
            total += p[i];
            count++;
        }
        max_count = max(max_count,count);
        count = 0;
    }
    cout << max_count;
    return 0;
}