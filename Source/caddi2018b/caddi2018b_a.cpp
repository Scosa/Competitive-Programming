#include <bits/stdc++.h>
using namespace std;
#define long long int;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int ans = 0;
  for(int i = 0; i < s.size(); i++)if(s[i] == '2') ans++;
  cout << ans << endl;
}