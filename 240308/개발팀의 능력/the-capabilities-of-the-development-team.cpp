#include <iostream>
#define MAX_ARR 5
using namespace std;

int arr[MAX_ARR];
int sum = 0;

int main() {
    for(int i=0;i<MAX_ARR;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int min_total = 1e9;
    for(int i=0;i<MAX_ARR;i++){
        for(int j=0;j<MAX_ARR;j++){
            for(int k=0;k<MAX_ARR;k++){
                for(int l=0;l<MAX_ARR;l++){

                    if(i==j || i==k || i==l || j==k || j==l || k==l) continue;
                    
                    int sum_one = arr[i]+arr[j];
                    int sum_two = arr[k]+arr[l];
                    int sum_three = sum - sum_one -sum_two;

                    if(sum_one == sum_two || sum_one == sum_three || sum_two == sum_three) continue;

                    int max_team = max(sum_one,max(sum_two,sum_three));
                    int min_team = min(sum_one,min(sum_two,sum_three));

                    min_total = min(min_total,max_team-min_team);
                }
            }
        }
    }
    cout << min_total;
    return 0;
}