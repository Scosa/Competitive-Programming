#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

int main(){
    int a, b;
    string str;
    cin >> a >> b >> str;
    if(str.length() >= a && str.length() <= b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
