#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int k;
  cin >> k;
  vector<ll> A(k);
  for(int i = 0; i < k; i++) cin >> A[i];
  ll ma = 2;
  ll mi = 2;
   if(2 != A[k - 1]) {
      cout << -1 << endl;
      return 0;
    }
  for(int i = k - 1; i > 0; i--){
    ll up = ma + A[i] - 1;
    ll dd = mi;
    if(dd % A[i - 1] != 0 && up < dd + (A[i - 1] - (dd % A[i - 1])) ){
      cout << -1 << endl;
      return 0;
    }
    ma = up - (up % A[i - 1]);
    if(dd % A[i - 1] != 0) mi = dd + (A[i - 1] - (dd % A[i - 1]));

  }
  cout << mi << ' ' << ma + A[0] - 1 << endl;
}