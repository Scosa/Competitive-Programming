#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

int main(){
    int tmp, s = 0, t = 0;
    REP(i, 4){
        cin >> tmp;
        s += tmp;
    }
    REP(i, 4){
        cin >> tmp;
        t += tmp;
    }
    if(s >= t) cout << s << endl;
    else cout << t << endl;
    return 0;
}
