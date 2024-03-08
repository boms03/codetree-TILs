#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,k;
    vector<int>v;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    int answer = 0;
    for(int i=0;i<n-k+1;i++){
        int sum = 0;
        for(int j=i;j<i+k;j++){
            sum += v[j];
        }
        answer = max(answer,sum);
    }
    cout << answer;
    return 0;
}