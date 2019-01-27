#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> A(n);
  int ma = 0;
  for(int i = 0; i < n;i++) cin >> A[i], ma = max(A[i], ma);
  int ans = 0;
  for(int i = 0;i < ma + 1; i++){
    if(A[0] > 0) ans++;
    for(int j = 0; j < n - 1; j++) if(A[j] <= 0 && A[j + 1] > 0) ans++;
    if(i == ma) break;
    for(int j = 0; j < n;j++) A[j]--;
  }
  cout << ans << endl;

}