#include <bits/stdc++.h>
using namespace std;
//#define long long int;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  int ans = 0;
  cin >> n;
  vector<string> S(n);
  for(int i = 0; i < n; i++) cin >> S[i];

  for(int i = 0; i < n; i++) {
      bool ok = true;
      for(int s  = 0; s < n; s++){
        for(int k = 0; k < n; k++){
          if(S[s][k] != S[(k + 0 - i + n) % n][(s + i - 0 + n) % n]) {
            ok = false;
            break;
          }
        }
      }
      if(ok) ans += (n - i);
  }
      for(int i = 1; i < n; i++) {
      bool ok = true;
      for(int s  = 0; s < n; s++){
        for(int k = 0; k < n; k++){
          if(S[s][k] != S[(k + i - 0 + n) % n][(s + 0 - i + n) % n]) {
            ok = false;
            break;
          }
        }
      }
      if(ok) ans += (n - i);
  }
  cout << ans  << endl;
}