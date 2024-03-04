#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int>v;
    cin >> n;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        v.push_back(input);
    }
    int ans = 1e9;
    // pick *2
    for(int i=0;i<n;i++){
        v[i]*=2;
        for(int j=0;j<n;j++){ // pick get rid
            vector<int>reduced;
            for(int k=0;k<n;k++){
                if(k==j) continue;
                reduced.push_back(v[k]);
            }
            int sum = 0;
            for(int e=0;e<reduced.size()-1;e++){
                sum += abs(reduced[e]-reduced[e+1]);
            }
            ans = min(ans,sum);
        }
        v[i]/=2;
    }

    cout << ans;
    return 0;
}