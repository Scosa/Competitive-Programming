#include <bits/stdc++.h>
using namespace std;
#define int long long;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll n, m ,k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  vector<vector< ll > > V(n);
  for(int i = 0; i < m ; i++) {
    int a, b;
    cin >> a >> b;a--;b--;
    V[a].push_back(b);
    V[b].push_back(a);
  }
  for(int i = 0; i < n; i++{
    for(int j = 0)
  }
}