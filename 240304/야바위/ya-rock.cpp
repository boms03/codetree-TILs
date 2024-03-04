#include <iostream>
using namespace std;


void swap(int rock[], int from, int to){
    int temp = rock[from];
    rock[from]=rock[to];
    rock[to] = temp;
}

int main() {

    int n;
    int map[100][3];

    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> map[i][j];
        }
    }
    int ans = 0;
    // 처음에 넣을곳 선택
    for(int i=1;i<=3;i++){
        int point=0;
        int rock[4]={0,};
        rock[i]=1; // 돌 넣기

        for(int j=0;j<n;j++){
            swap(rock, map[j][0],map[j][1]); //위치 바꾸기
            if(rock[map[i][2]]==1) point++; // 돌 확인
        }

        ans = max(ans,point);

    }
    cout << ans;
    return 0;
}