#include <iostream>
#define MAX_NUM 100
using namespace std;

int n,a,b;
int s[MAX_NUM], e[MAX_NUM];
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i] >> e[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){

                int fill[MAX_NUM]={0,};
                bool flag = true;

                for(int m=0; m<n; m++){
                    if(m==i || m==j || m==k) continue;
                
                    for(int x=s[m]; x<=e[m]; x++){
                        if(fill[x]==1){
                            flag = false;
                            break;
                        }
                        fill[x]=1;
                    }
                    if(!flag) break;
                }
                if(flag) count++;
            }
        }
    }
    cout << count;
    return 0;
}