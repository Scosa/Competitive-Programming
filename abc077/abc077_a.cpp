#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

signed main(){
    string a, b;
    cin >> a >> b;
    if(a[0] == b[2] && a[1] == b[1] && a[2] == b[0]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
