#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

signed main(){
    int n, score[300], number[300][3], j, k, flag;
    cin >> n;
    REP(i, n){
        REP(j, 3){
            cin >> number[i][j];
        }
    }
    REP(i, n){
        REP(j, 3){
            if(number[i][j] == 0){
                continue;
            }else{
                flag = 1;
                REP(k, n){
                    if(k == i){
                        continue;
                    }else if(number[k][j] == number[i][j]){
                        number[k][j] = 0;
                        flag = 0;
                    }
                }
                if(flag){
                    score[i] += number[i][j];
                }
            }
        }
    }
    REP(i, n){
        cout << score[i] << endl;
    }
    return 0;
}
