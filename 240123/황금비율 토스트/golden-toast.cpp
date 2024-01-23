#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    list<char> l;
    list<char>::iterator it;
    int n,m;
    string s;
    char p, input;

    cin >> n >> m;
    cin >> s;

    for(int i=0; i<n; i++){
        l.push_back(s[i]);
    }

    it = l.end();

    while(m--){
        cin >> input;
        if(input=='L'){
            if(it != l.begin()) it--;
        } else if(input=='R'){
            if(it != l.end()) it++;
        } else if(input=='D'){
            if(it != l.end()) it = l.erase(it);
        } else if(input=='P'){
            cin >> p;
            l.insert(it, p);
        }
    }
    for(it = l.begin(); it!=l.end();it++){
        cout << *it;
    }
    return 0;
}