#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int>q;
    int n,k;
    cin >> n >> k;

    // 6 5 4 3 2 1
    for(int i=1; i<=n; i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i=1; i<=k-1; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}