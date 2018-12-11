#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n,m;
  cin >> n >> m;
  vector<int> A(n);
  long long ans =0 ;
  vector<int> L(m),R(m);
  for(int i = 0; i < n; i++)cin >> A[i];
  for(int i = 0; i < m; i++)cin >> L[i] >> R[i],L[i]--,R[i]--;
  for(int i = 0; i < (1 << n); i++){
    bool ok = true;
    for(int j = 0; j < m; j++){
      int cnt = 0;
      for(int k = L[j];k <= R[j];k++){
        if(i & (1 << k)) cnt++;
      }
      if(cnt >= 2 ){
        ok = false;
        break;
      } 
    }
    if(!ok) continue;
    long long sum = 0;
    for(int j = 0; j < n;j++) if(i & (1 << j)) sum += A[j];
    ans = max(ans, sum);
  }
  cout << ans << endl;
}