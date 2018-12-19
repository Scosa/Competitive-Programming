#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<ll> A(n);
  vector< pair<ll, int> > X(n + 1);X[0].first = 0; 
  for(int i=0; i < n; i++) cin >> A[i],X[i + 1].first = A[i];
  sort(X.begin(), X.end());
  unordered_map<ll,ll> mp;
  int c = 1;
  std::sort(X.begin(), X.end());
  X.erase(std::unique(X.begin(), X.end()), X.end());

  for(int i = 0; i < n; i++) {
    if(mp[X[i + 1].first] == 0)mp[X[i + 1].first] = c,c++;
  }
 // for(auto i:mp)cout << i.first << ' ' << i.second << endl;
 n = mp.size();
  vector<ll> sum(n + 1, 0);
  for(int i = mp[A[0]] + 1; i <= n; i++){
   // cout << i << endl;
    sum[i] = sum[i - 1] + (X[i].first - X[i - 1].first);
  }
  long long cnt = 1;
  long long ans = 1;
      // for(int i = 0; i <= n; i++)cout << sum[i] << ' ';cout << endl;
  for(int i = 1; i < n; i++){
    if(sum[mp[A[i]]] - cnt >= 0) cnt++,sum[mp[A[i]]]--;
    else {
      ans++;
      for(int j = 1; j <= mp[A[i]]; j++){
        sum[j] = sum[j - 1] + (ans - 1) * (X[j].first - X[j - 1].first);
      }
      sum[mp[A[i]]] -= ans - 1;
      for(int j = mp[A[i]] + 1; j <= n; j++){
        sum[j] = sum[j - 1] + ans * (X[j].first - X[j - 1].first);
      }
      cnt = 1;
    }
      //for(int j = 0; j <= n; j++)cout << sum[j] << ' ';
      //cout << endl;
  }

  cout << ans << endl;

}