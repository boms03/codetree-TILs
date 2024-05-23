#include <iostream>
using namespace std;

int x,y;
int main() {
    cin >> x >> y;
    int count = 0;
    for(int i=x; i<=y; i++){
        int digits[10] = {};
        int divisor = 1;
        while(i/divisor!=0){
            int quotient = i/divisor;
            int place_value = quotient % 10;
            digits[place_value]++;
            divisor *= 10;
        }
        bool flag = true;
        int count_digit = 0;
        for(int j=0; j<10; j++){
            if(digits[j]>0) count_digit++;
            if(count_digit>2) break;
        }
        if(count_digit == 2) count++;
    }
    cout << count;
    return 0;
}