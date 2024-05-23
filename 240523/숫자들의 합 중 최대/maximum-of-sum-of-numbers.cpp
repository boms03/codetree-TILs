#include <iostream>
using namespace std;
int x,y;
int main() {
    cin >> x >> y;
    int max_sum = 0;
    for(int i=x;i<=y;i++){
        int sum = 0;
        int temp = i;
        sum += temp % 10;
        int divide = 10;
        while(temp/divide != 0){
            sum += temp/divide;
            divide *= 10;
        }
        max_sum = max(max_sum,sum);
    }
    cout << max_sum;
    return 0;
}