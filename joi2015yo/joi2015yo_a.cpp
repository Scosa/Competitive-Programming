#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

signed main(){
    int a, b, c, d, p, x, y;
    cin >> a >> b >> c >> d >> p;
    x = p * a;
    if(p > c){
        y = b + (p - c) * d;
    }else{
        y = b;
    }
    if(x  <  y){
        cout << x << endl;
    }else{
        cout << y << endl;
    }
    return 0;
}
