#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

signed main(){
    ll q, h, s, d, n, one, two;
    cin >> q >> h >> s >> d >> n;
    q *= 8;
    h *= 4;
    s *= 2;
    if(h <= q && h <= s){
        one = h / 2;
        two = h;
    }else if(q <= s){
        one = q / 2;
        two = q;
    }else{
        one = s / 2;
        two = s;
    }
    if(two > d){
        two = d;
    }
    if(n % 2){
        cout << (n - 1) / 2 * two + one << endl;
    }else{
        cout << n / 2 * two << endl;
    }
    return 0;
}
