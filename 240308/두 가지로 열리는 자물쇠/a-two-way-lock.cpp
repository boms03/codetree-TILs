#include <iostream>
#include <math.h>
#define MAX_ARR 3
using namespace std;

int n;
int arr_first[MAX_ARR];
int arr_second[MAX_ARR];

int main() {

    cin >> n;

    for(int i=0;i<MAX_ARR;i++) 
        cin >> arr_first[i];

    for(int i=0;i<MAX_ARR;i++) 
        cin >> arr_second[i];

    int cnt = 0;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            for(int k=1;k<=n;k++){

                if( (abs(arr_first[0]-i) <= 2 || abs(arr_first[0]-i) >= n-2) 
                && (abs(arr_first[1]-j) <= 2 || abs(arr_first[1]-j) >= n-2) 
                && (abs(arr_first[2]-k) <= 2 || abs(arr_first[2]-k) >= n-2)) cnt++;
                
                

         
                
                else if( (abs(arr_second[0]-i) <= 2 || abs(arr_second[0]-i) >= n-2) 
                && (abs(arr_second[1]-j) <= 2 || abs(arr_second[1]-j) >= n-2) 
                && (abs(arr_second[2]-k) <= 2 || abs(arr_second[2]-k) >= n-2)) cnt++;
            }

        }
    }

    cout << cnt;

    return 0;
}