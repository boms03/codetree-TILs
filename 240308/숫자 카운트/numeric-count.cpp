#include <iostream>
#define MAX_N 10
using namespace std;

int n;
int num[MAX_N];
int cnt_1[MAX_N];
int cnt_2[MAX_N];

int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num[i] >> cnt_1[i] >> cnt_2[i];
    }

    int cnt = 0;
    for(int i=1;i<=MAX_N;i++){
        for(int j=1;j<=MAX_N;j++){
            for(int k=1;k<=MAX_N;k++){
                bool check = true;
                for(int l=0;l<n;l++){
                    int cnt_one = 0, cnt_two = 0;
                    if( (num[l]/100)==i) cnt_one++;
                    if( ((num[l]/100)==j) || ((num[l]/100)==k) ) cnt_two++;

                    if( (num[l]%100)/10==j) cnt_one++;
                    if( ((num[l]%100)/10==i) || ((num[l]%100)/10==k) ) cnt_two++;

                    if((num[l]%10)==k) cnt_one++;
                    if( ((num[l]%10)==j) || ((num[l]%10)==i) ) cnt_two++;

                    if(cnt_one != cnt_1[l] || cnt_two != cnt_2[l]) check = false;
                }
                if(check) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}