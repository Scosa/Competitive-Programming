#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

signed main(){
    int min = 100, sum = 0, tmp;
    REP(i, 4){
        cin >> tmp;
        sum += tmp;
        if(min > tmp){
            min = tmp;
        }
    }
    sum -= min;
    min = 100;
    REP(i, 2){
        cin >> tmp;
        sum += tmp;
        if(min > tmp){
            min = tmp;
        }
    }
    sum -= min;
    cout << sum << endl;
    return 0;
}
