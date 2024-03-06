#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    int map[20];
    int num;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> map[i];
    }

    int answer = -1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                bool carry = false;
                //일의 자리
                if(map[i]%10+map[j]%10+map[k]%10>=10) carry = true;
                //십의 자리
                if(map[i]%100/10+map[j]%100/10+map[k]%100/10 >=10) carry = true;
                //백의 자리
                if(map[i]%1000/100+map[j]%1000/100+map[k]%1000/100>=10) carry = true;
                //천의 자리
                if(map[i]%10000/1000+map[j]%10000/1000+map[k]%10000/1000>=10) carry = true;

                if(!carry) answer = max(answer,map[i]+map[j]+map[k]);
                
            }
        }
    }
    cout << answer;
    return 0;
}