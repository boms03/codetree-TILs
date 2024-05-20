#include <iostream>
#define MAX_N 100
#define MAX_NUM 1e4
#define MIN_NUM -1e4
using namespace std;

int n;
int x[MAX_N], y[MAX_N];

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }  
    int max_area = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if((x[i]==x[j] && y[i]==y[k])){
                    max_area = max(max_area,abs(y[i]-y[j])*abs(x[i]-x[k]));
                }
                else if(x[i]==x[j] && y[j]==y[k]){
                    max_area = max(max_area,abs(y[i]-y[j])*abs(x[j]-x[k]));
                }
                else if(x[i]==x[k] && y[i]==y[j]){
                    max_area = max(max_area,abs(y[i]-y[k])*abs(x[i]-x[j]));
                }
                else if(x[i]==x[k] && y[j]==y[k]){
                    max_area = max(max_area,abs(y[i]-y[k])*abs(x[j]-x[k]));
                }
                else if(x[j]==x[k] && y[i]==y[j]){
                    max_area = max(max_area,abs(y[j]-y[k])*abs(x[i]-x[j]));
                }
                else if(x[j]==x[k] && y[i]==y[k]){
                    max_area = max(max_area,abs(y[j]-y[k])*abs(x[i]-x[k]));
                }
            }
        }
    }
    cout << max_area;
    return 0;
}