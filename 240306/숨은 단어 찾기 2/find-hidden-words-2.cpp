#include <iostream>
using namespace std;
int main() {
    int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
    int dy[] = {-1, 0, 1, -1, 0, 1, -1, 1};
    int map[50][50];
    int n,m,cnt=0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<s.length();j++){
            map[i][j]=s[j];
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int d=0;d<8;d++){
                if(map[i][j]!='L') continue;

                string s;
                s+=map[i][j];
                int curI = i, curJ = j;
                for(int k=0;k<2;k++){
                    int ni = curI + dy[d];
                    int nj = curJ + dx[d];

                    if(ni<0 || ni>=n || nj<0 || nj >=m) break;
        
                    s+=map[ni][nj];
                    curI = ni;
                    curJ = nj;
                }
                if(s=="LEE") cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}