#include <iostream>
using namespace std;

int x,y;
int main() {
    cin >> x >> y;
    int answer = 0;
    for(int i=x; i<=y; i++){
        int digits[10] = {};
        int divisor = 1;
        int length = 0;
        while(i/divisor != 0){
            int quotient = i / divisor;
            int place_value = quotient % 10;
            digits[place_value]++;
            divisor *= 10;
            length++;
        }

        bool flag = false;
        for(int j=0; j<10; j++){
            if(digits[j]==length-1) flag = true;
        }
        if(flag) answer++;
    }
    cout << answer;
    return 0;
}