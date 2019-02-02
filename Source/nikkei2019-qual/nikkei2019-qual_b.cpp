#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  string a,b,c;
  cin >> n >> a >> b >> c;
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(a[i] != b[i] && a[i] != c[i] && c[i] != b[i]) ans += 2;
    else if(a[i] == b[i] && a[i] == c[i] && c[i] == b[i]) continue;
    else ans++;
  }
  cout << ans << endl;
}