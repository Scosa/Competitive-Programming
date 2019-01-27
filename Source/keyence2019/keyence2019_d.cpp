#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  map<int, int> mpA,mpB,mpC;
  vector<pair<int, int > >A(n + m);
  vector<int> C(n),D(m);
  bool ok = true;
  for(int i = 0; i < n; i++){
    cin >> A[i].first;
    C[i] = A[i].first;
    A[i].second = 0;
    if(mpA[A[i].first]) {
      ok = false;
    }
    mpA[A[i].first]++;
    mpC[A[i].first]++;
  }
  for(int i = n; i < m + n; i++){
    cin >> A[i].first;
    D[i - n] = A[i].first;
    if(mpB[A[i].first]) {
      ok = false;
    }
    A[i].second = 1;
    mpB[A[i].first]++;
    mpC[A[i].first]++;
  }
  sort(A.begin(), A.end());

  for(int i = 0; i < n + m - 2; i++){
    if(A[i + 1].first - A[i].first >= 2) ok = false;
  }
  if(A[n + m - 1].first != A[n + m - 2].first) ok = false;
  if(A[n + m - 1].first != n * m) ok =false;
  if(!ok) {
    cout << 0 << endl;
    return 0;
  }
  int ans = 1;

  for(int i = 0; i < n; i++){
    int cnt = 0;
    for(int j = 0; j < m; j++){
      if(C[i] < D[j]) cnt++;
      if(C[i] == D[j]) {
        cnt = 1;
        break;
      }
    }
    ans *= cnt;
    ans %= mod;
  }
  for(int i = 0; i < m; i++){
    int cnt = 0;
    for(int j = 0; j < n; j++){
      if(D[i] < C[j]) cnt++;
      if(C[j] == D[i]) {
        cnt = 1;
        break;
      }
    }
    ans *= cnt;
    ans %= mod;
  }
  for(int i = n * m - mpC.size(); i >= 1; i--) ans *= i, ans %= mod;
  cout << ans%mod << endl;
}