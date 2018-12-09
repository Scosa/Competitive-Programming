#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1234567;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<ll> A(n);
  vector<ll> B(m);
  for(int i = 0; i < n; i++) cin >> A[i];
  for(int i = 0; i < m; i++) cin >> B[i];
  ll t;
  cin >> t;
  for(int i = 0; i < t; i++){
    ll a,b,c;
    cin >> a >> b >> c;
    c--;b--;
    if(a == 1){
      A[b] -= min(A[b] , B[c]);
      B[c] -= min(A[b] , B[c]);
    }
    else {
    
    }
  }
  ll ans = 0;
  for(int i = 0; i < n; i++) ans += A[i];
  cout << ans << endl;
  ans = 0;
  for(int i = 0; i < m; i++) ans += B[i];
  cout << ans << endl;
}