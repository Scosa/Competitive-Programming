#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n,m;
  cin >> n >> m;
  vector<int> A(m);
  vector<int> ans(n);
  for(int i = 0; i < m; i++) cin >> A[i];
  for(int i = 0; i < m; i++){
    int cnt = 0;
    for(int j = 0; j < n; j++) {
      int k;
      cin >> k;
      if(A[i] == k) ans[j]++;
      else cnt++;
    }
    ans[A[i] - 1] += cnt;
  }

  for(int i = 0; i < n; i++) cout << ans[i] << endl;
}