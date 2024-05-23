#include <iostream>
using namespace std;
int x,y;
int main() {
    cin >> x >> y;
    int max_sum = 0;
    for(int i=x;i<=y;i++){
        int sum = 0;
        int divisor = 1;
        while(i/divisor != 0){
            int quotient = i/divisor;
            int place_value = quotient % 10;
            sum += place_value;
            divisor *= 10;
        }
        max_sum = max(max_sum,sum);
    }
    cout << max_sum;
    return 0;
}