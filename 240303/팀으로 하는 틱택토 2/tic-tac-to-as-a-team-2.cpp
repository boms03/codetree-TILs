#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    char map[3][3];
    for(int i=0;i<3;i++){
        string s;
        cin >> s;
        for(int j=0;j<s.length();j++){
            map[i][j]=s[j];
        }
    }

    int cnt = 0;
    // 가로 세로
    for(int i=0;i<3;i++){
        set<char>vertical;
        set<char>horizontal;
        set<char>type;
        for(int j=0;j<3;j++){
            vertical.insert(map[i][j]);
            horizontal.insert(map[j][i]);
        }
        if(vertical.size()==2) cnt++;
        if(horizontal.size()==2) cnt++;
    }

    set<char>diagnal1;
    diagnal1.insert(map[0][0]);
    diagnal1.insert(map[1][1]);
    diagnal1.insert(map[2][2]);

    set<char>diagnal2;
    diagnal2.insert(map[2][0]);
    diagnal2.insert(map[1][1]);
    diagnal2.insert(map[0][2]);

    if(diagnal1.size()==2) cnt++;
    if(diagnal2.size()==2) cnt++;


    // 대각선

    cout << cnt;

    return 0;
}