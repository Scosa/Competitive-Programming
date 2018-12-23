#include <bits/stdc++.h>
using namespace std;
#define long long int;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n,h,w;
  cin >> n >> h >> w;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if(a >= h && b >= w) ans++;
  }
  cout << ans << endl;
}