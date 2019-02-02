#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int x, y,n;
  cin >> n;

  cin >> x >> y;
  cout << min(x, y) << ' ';
  cout << max((int)0,x + y - n) << endl; 
}