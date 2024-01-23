#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
    list<int>lst;
    int n, num;
    string input;
    cin>> n;
    for(int i=0;i<n;i++){
        cin >> input;
        if(input=="push_front"){
            cin >> num;
            lst.push_front(num);
        } else if(input=="push_back"){
            cin >> num;
            lst.push_back(num);
        } else if(input=="pop_front"){
            cout << lst.front() << "\n";
            lst.pop_front();
        } else if(input=="pop_back"){
            cout << lst.back() << "\n";
            lst.pop_back();
        } else if(input=="size"){
            cout << lst.size() << "\n";
        } else if(input=="empty"){
            if(lst.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
        } else if(input=="front"){
            cout << lst.front() << "\n";
        } else if(input=="back"){
            cout << lst.back() << "\n";
        } 
    }
    return 0;
}