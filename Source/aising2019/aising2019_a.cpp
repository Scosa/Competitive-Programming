#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, h,w;
  cin >> n >> h >> w;
  cout << (n - h + 1) * (n - w + 1) << endl;
}