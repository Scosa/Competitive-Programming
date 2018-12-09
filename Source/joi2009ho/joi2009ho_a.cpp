#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  string s, t;
  cin >> n >> m >> s;
  for(int i = 0;i < 2*n + 1;i++) {
    if(i % 2 == 0) t.push_back('I');
    else t.push_back('O');
  }
  //cout << t << endl;
  int ans = 0;
  int use = 2 * n  + 1; 
  for(int i = 0; i < (m - use); i++){
    if(s.substr(i, use) == t) {
      ans++;
    }
  }
  cout << ans << endl;
}