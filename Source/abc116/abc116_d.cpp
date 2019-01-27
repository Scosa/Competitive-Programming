#include <bits/stdc++.h>
using namespace std;
#define int long long



signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  vector<pair<int, int> > A(n);
  for(int i = 0 ; i < n;i++){
    int a,b;
    cin >> a >> b;
    A[i].first = b;
    A[i].second = a;
  }
  sort(A.begin(), A.end());
  map<int,int> mp;
  int ans = 0;
  pair<int,int> memo;
  bool ok = false;
  int memo2 = 0;
  for(int  i = n - 1; i >= n - k; i--){
    mp[A[i].second]++;
    if(mp[A[i].second] > 1) memo.first = A[i].first,memo.second = A[i].second,memo2 = i, ok = true;
    ans += A[i].first;
  }
  int all = mp.size();
  ans += all * all;
  if(!ok) {
    cout << ans  << endl;
    return 0;
  }
  int cnt = ans;

  for(int i = n - k - 1; i >=0; i--){
    if(mp[A[i].second] == 0){
      
        cnt = cnt - memo.first + A[i].first - all * all + (all + 1) * (all + 1);
        all++;
        mp[A[i].second]++;
        bool isok = false;
      mp[memo.second]--;
      for(int j = memo2 + 1; j< n; j++){
          if(mp[A[j].second] > 1) {
            memo.first = A[j].first,memo.second = A[j].second,memo2 = j; isok = true;break;
          }
        }
        if(!isok || all == k) {
          cout << max(ans , cnt)<< endl;
          return 0;
        }
        
        ans = max(ans, cnt);
    }
    
  }
  cout << ans << endl;
}