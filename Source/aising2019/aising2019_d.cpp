#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  vector<int> A(n);
  for(int i = 0; i < n; i++) cin >> A[i];
  vector<int> X(q), Y(q);
  for(int i = 0; i < q; i++) cin >> X[i], Y[i] = X[i];
  sort(Y.begin(), Y.end());
  int cnt = 0;
  int Takahashi = 0;
  int Aoki = 0;
  map<int,int> mp;
  if(n % 2 == 0){
    for(int i = n / 2; i < n; i++) Takahashi += A[i];
    for(int i = 0; i < q; i++){
      int x = Y[i];
      while(1){
        if(abs(A[cnt] - x) <= abs(A[n - (n - cnt) / 2] - x)) break;
        if(cnt >= n - 1) break;
        Takahashi -= A[n - (n - cnt) / 2];
        Takahashi += A[cnt + 1];
        cnt += 2;
      }
      mp[Y[i]] = Takahashi;
    }
  }
  else{
    for(int i = n / 2; i < n; i++) Takahashi += A[i];

    for(int i = 0; i < q; i++){
      int x = Y[i];
      if(cnt == 0){
        if(abs(A[cnt] - x) > abs(A[n / 2] - x)) {
          Takahashi = Takahashi - A[n / 2] + A[0];
          cnt = 1;
        }
      }
      if(cnt > 0) {
        while(1){
        if(abs(A[cnt] - x) <= abs(A[n - (n - cnt) / 2] - x)) break;
        if(cnt >= n - 1) break;
        Takahashi = Takahashi - A[n - (n - cnt) / 2] + A[cnt + 1];
        cnt += 2;
      }
    }
      mp[Y[i]] = Takahashi;
    }
  }
  for(int i = 0; i < q; i++) cout << mp[X[i]] << endl;
}