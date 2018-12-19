#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> A(n),X(n);
  for(int i = 0; i < n; i++) cin >> A[i],X[i] = A[i];

  sort(X.begin(), X.end());
  map<int,int> mp;
  for(int i = 0; i < n; i++) mp[X[i]] = i;
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(i % 2 != mp[A[i]] % 2) ans++;
  }
  cout << ans / 2 << endl;
}