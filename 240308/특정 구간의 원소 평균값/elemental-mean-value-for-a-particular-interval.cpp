#include <iostream>
#define MAX_N 100
using namespace std;

int n;
int arr[MAX_N];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) 
        cin >> arr[i];
    
    int cnt = 0;
    // 시작
    for(int i=0;i<n;i++){
        // 끝
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }

            // 평균
            double avg = (double) sum / (j-i+1);

            bool exist = false;
            for(int k=i;k<=j;k++){
                if(arr[k]==avg){
                    exist = true;
                    break;
                }
            }
            if(exist) cnt++;
        }
    }
    cout << cnt;

    return 0;
}