#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
    queue<int>q;
    int n,num;
    string input;

    cin >> n;
    while(n--){
        cin >> input;

        if(input=="push"){
            cin >> num;
            q.push(num);
        } else if(input=="front"){
            cout << q.front() << '\n';
        } else if(input=="size"){
            cout << q.size() << '\n';
        } else if(input=="empty"){
            if(q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if(input=="pop"){
            cout << q.front() << '\n';
            q.pop();
        } 
    }
}