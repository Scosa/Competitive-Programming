#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<ll> A(1),X(1);
  map<ll,vector<int> > mp;
  cin >> A[0];
  X[0] = A[0];
  mp[A[0]].push_back(0);
  for(int i = 1; i < n; i++) {
    int k;
    cin >> k;
    if(A[A.size() - 1] != k) {
      A.push_back(k);
      mp[A[A.size() - 1]].push_back(A.size() - 1);
      X.push_back(A[A.size() - 1]);
    } 
  }
  X.push_back(0);
  sort(X.begin(), X.end(),greater<ll>());
  int ans = 0;
  int cnt = 0;
  unordered_map<ll,bool> mpp;
  /*for(int i = 0; i < A.size(); i++){
    if(i == A.size() - 1)break;
    if(A[i] == A[i + 1]) {
      A.erase(A.begin() + i + 1);
      i--;
    }
  }*/
  //for(int i = 0; i < A.size(); i++) cout << A[i] << ' ';
  n = A.size();

  for(int i = 0; i < n; i++){
    ll high = X[i];
    if(mpp[high]) continue;
    mpp[high] = true;
    for(int j = 0; j < mp[high].size();j++){
      int p = mp[high][j];

      //cout << p << endl;
      if(p == 0) {
        if(A[p + 1] < high) cnt++;
      }
      else if(p == n - 1) {
        if(A[p - 1] < high) cnt++;
      }
      else if(A[p - 1] < high && A[p + 1] < high) cnt++;
      else if(A[p - 1] >= high && A[p + 1] >= high) cnt--; 
    }
  // cout << high << ' ' << cnt << endl;
    ans = max(ans , cnt);
  }
  cout << ans << endl;
}