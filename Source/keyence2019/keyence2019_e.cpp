#include <bits/stdc++.h>
using namespace std;
#define int long long
bool use[202020];
vector<pair<int, int> > D(n);


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, d;
  cin >> n >> d;
  vector<int> A(n);
  for(int i = 0; i < n; i++) cin >> A[i];

  map<int,int> mp;
  for(int i = 1; i < n; i++){
    D[i].first = i * d + A[0] + A[i];
    D[i].second = i;
  }
  sort(D.begin(), D.end());
  for(int i = 1; i < n; i++) mp[D[i].second] = i;
  int ans = 0;
  ans += D[1].first;
  use[0] = true;
  int memo = D[1].second;
  for(int i = 1; i < n; i++){
    int s = mp[memo];
    
  }
}