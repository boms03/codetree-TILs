#include <iostream>
#define MAX_N 11
using namespace std;

int n,a,b;
int s[MAX_N], e[MAX_N];
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i] >> e[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){

                int fill[MAX_N]={0,};
                bool flag = true;
                
                for(int m=0; m<n; m++){
                    if(m==i || m== j || m==k) continue;
                
                    for(int x=s[m]; x<=e[m]; x++){
                        if(fill[x]==1){
                            flag = false;
                            break;
                        }
                        fill[x]=1;
                    }
                }
                if(flag) count++;
            }
        }
    }
    cout << count;
    return 0;
}