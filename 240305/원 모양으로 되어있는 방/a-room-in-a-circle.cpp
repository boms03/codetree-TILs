#include <iostream>
using namespace std;
int main() {
    int n;
    int map[1004];
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> map[i];
    }

    int ans = 1e9;
    for(int i=1;i<=n;i++){
        int dist_sum = 0;
        for(int j=1;j<=n;j++){
            int dist = (j+n-i)%n;
            dist_sum+=dist*map[j];
        }
        ans = min(ans,dist_sum);
    }
    cout << ans;
    

    return 0;
}