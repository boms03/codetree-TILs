#include <iostream>
#define MAX_ARR 6
using namespace std;

int arr[MAX_ARR];

int main() {
    int sum = 0;
    for(int i=0;i<MAX_ARR;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int total_min = 1e9;
    for(int i=0;i<MAX_ARR;i++){
        for(int j=0;j<MAX_ARR;j++){
            for(int k=0;k<MAX_ARR;k++){
                for(int l=0;l<MAX_ARR;l++){
                    if(i==j || i==k || i== l || j==k || j==l || k==l) continue;
                    int sum_one = arr[i]+arr[j];
                    int sum_two = arr[k]+arr[l];
                    int sum_three = sum - sum_one - sum_two;
                    int max_team = max(sum_one,max(sum_two,sum_three));
                    int min_team = min(sum_one,min(sum_two,sum_three));

                    // cout << sum_one << endl;
                    // cout << sum_two << endl;
                    // cout << sum_three << endl;
                    // cout << max_team << endl;
                    // cout << min_team << endl;
                    // cout << endl;
                    total_min = min(total_min, max_team-min_team);
                }   
            }
        }
    }
    cout << total_min;
    return 0;
}