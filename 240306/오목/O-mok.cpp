#include <iostream>
using namespace std;


int main() {
    int map[19][19];

    int dx[] = {-1,-1,-1,1,1,1,0,0};
    int dy[] = {-1,0,1,-1,0,1,-1,1};
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            cin >> map[i][j];
        }
    }
    int answer = 0;
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){

            if(map[i][j]==0) continue;

            for(int k=0;k<8;k++){
                int cnt = 1, curI = i, curJ = j;
                while(true){
                    int ni = curI+dy[k];
                    int nj = curJ+dx[k];
                    if(nj<0 || nj>=19 || ni<0 || ni>=19) break;
                    if(map[ni][nj] != map[i][j]) break;
                    
                    cnt++;
                    curI = ni;
                    curJ = nj;
                }
                if(cnt==5){
                    cout << map[i][j] << '\n';
                    cout << i + 2*dy[k] + 1 << " " << j + 2*dx[k] + 1;
                    return 0;
                }
            }
        }
    }
}