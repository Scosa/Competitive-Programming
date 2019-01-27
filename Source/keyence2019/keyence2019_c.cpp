#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int>A(n), B(n),C(n);
  int sumA = 0;
  int sumB = 0;
  for(int i = 0; i < n; i++) cin >> A[i], sumA += A[i];
  for(int i = 0; i < n; i++) cin >> B[i], sumB += B[i], C[i] = A[i] - B[i];
  if(sumA < sumB) {
    cout << -1 << endl;
    return 0;
  }
  
  sort(C.begin(), C.end(), greater<int>());
  int cnt = 0;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(C[i] < 0) cnt += -C[i],ans++;
  }
  for(int i = 0; i < n; i++) {
    if(cnt <= 0) {
      cout << ans << endl;
      return 0;
    }
    cnt -= C[i];
    ans++;
  }

}