#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int map[3][3];
    for(int i=0;i<3;i++){
        string s;
        cin >> s;
        for(int j=0;j<s.length();j++){
            map[i][j]=s[j]-'0';
        }
    }
    
    int ans = 0;
    for(int i=1;i<=9;i++){
        for(int j=i+1;j<=9;j++){

            bool win = false;

            int cntI=0,cntJ=0;

            for(int k=0;k<3;k++){
                cntI=0,cntJ=0;
                for(int l=0;l<3;l++){
                    if(map[k][l]==i) cntI++;
                    if(map[k][l]==j) cntJ++;
                }
                if(cntI+cntJ==3 && cntI>=1 && cntJ>=1) win=true;
            }

            for(int k=0; k<3; k++){
                cntI=0,cntJ=0;
                for(int l=0;l<3;l++){
                    if(map[l][k]==i) cntI++;
                    if(map[l][k]==j) cntJ++;
                }
                if(cntI+cntJ==3 && cntI>=1 && cntJ>=1) win=true;
            }
            cntI=0,cntJ=0;
            for(int k=0;k<3;k++){
                if(map[k][k]==i) cntI++;
                if(map[k][k]==j) cntJ++;
            }
            if(cntI+cntJ==3 && cntI>=1 && cntJ>=1) win=true;

            cntI=0,cntJ=0;
            for(int k=0;k<3;k++){
                    if(map[k][2-k]==i) cntI++;
                    if(map[k][2-k]==j) cntJ++;
            }
            if(cntI+cntJ==3 && cntI>=1 && cntJ>=1) win=true;


            if(win) ans++;
        }
    }
    cout << ans;
}