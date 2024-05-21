#include <iostream>
#define MAX_N 51
#define MAX_D 101
using namespace std;

typedef struct{
    int p;
    int m;
    int t;
} eat;

typedef struct{
    int p;
    int t;
} sick;

eat info1[MAX_D];
sick info2[MAX_N];
int n,m,d,s;

int main() {

    cin >> n >> m >> d >> s;

    int p,m,t;
    
    for(int i=0; i<d; i++){
        cin >> p >> m >> t;
        eat e;
        e.p = p;
        e.m = m;
        e.t = t;
        info1[i]=e;
    }

    for(int i=0; i<s; i++){
        cin >> p >> t;
        sick s;
        s.p = p;
        s.t = t;
        info2[i]=s;
        
    }

    int max_pill = 0;

    // guess one possible rotten cheese
    for(int i=1; i<=m; i++){

        int count = 0;
        int time[MAX_N];
        for(int j=0;j<d;j++){
            // check if a person ate the cheese
            if(info1[j].m != i) continue;
            // record when the person ate it
            time[info1[j].p]=info1[j].t;
        }
        bool possible = true;
        // check contradiction
        for(int j=0;j<s;j++){
            // ate it after getting sick
            if(time[info2[j].p] >= info2[j].t) possible = false;
            // did not eat at all
            if(time[info2[j].p] == 0 ) possible = false;
        }

        int count_pill = 0;
        // count if the cheese is actually rotten
        if(possible){
            for(int j=1; j<=n; j++){
                if(time[j]!=0) count_pill++;
            }
        }
        max_pill = max(max_pill,count_pill);
    }

    cout << max_pill;


    return 0;
}