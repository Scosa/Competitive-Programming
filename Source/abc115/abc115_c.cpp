#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n,k;
  cin >> n >> k;
  vector<long long> H(n);
  for(int i = 0; i < n; i++) cin >> H[i];
  sort(H.begin(), H.end());
  long long ans = 101010101010000;
  for(int i = 0; i < n - k + 1; i++){
    ans = min(ans, H[i + k - 1] - H[i]);
  }
  cout << ans << endl;
}