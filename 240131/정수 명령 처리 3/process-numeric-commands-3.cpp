#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int>d;
    int n,num;
    string input;
    cin >> n;
    while(n--){
        cin >> input;
        if(input=="push_back"){
            cin >> num;
            d.push_back(num);
        } else if(input=="push_front"){
            cin >> num;
            d.push_front(num);
        } else if(input=="pop_front"){
            cout << d.front() << '\n';
            d.pop_front();
        } else if(input=="pop_back"){
            cout << d.back() << '\n';
            d.pop_back();
        } else if(input=="size"){
            cout << d.size() << '\n';
        } else if(input=="empty"){
            if(d.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if(input=="front"){
            cout << d.front() << '\n';
        } else if(input=="back"){
            cout << d.back() << '\n';
        }
    }
    return 0;
}