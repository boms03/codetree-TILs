#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m,input;
    vector<int>v;
    cin >> n >> m;
    v.push_back(-1);
    for(int i=0;i<n;i++){
        cin >> input;
        v.push_back(input);
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        int sum = 0;

        int index = i;
        for(int i=0;i<m;i++){
            sum+=v[index];
            index = v[index];
        }
        ans = max(ans,sum);
    }
    cout << ans;
    return 0;
}