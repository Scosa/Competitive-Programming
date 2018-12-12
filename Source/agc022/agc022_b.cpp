#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  if(n == 3) {cout << 2 << ' ' << 5 << ' ' << 63;return 0;} 
  if(n == 4) {cout << 2 << ' ' << 5 << ' ' << 63 << ' ' << 20;return 0;}
  if(n == 5) {cout << 2 << ' ' << 5 << ' ' << 63 << ' ' << 20 << ' ' << 60;return 0;}

  vector<int> ans;
  ll sum = 0;
  for(int i = 0; i < n; i++){
    if(i % 4 == 0) ans.push_back( i / 4 * 6 + 2),sum += i / 4 * 6 + 2;
    if(i % 4 == 1) ans.push_back( i / 4 * 6 + 3),sum += i / 4 * 6 + 3;
    if(i % 4 == 2) ans.push_back( i / 4 * 6 + 4),sum += i / 4 * 6 + 4;
    if(i % 4 == 3) ans.push_back( i / 4 * 6 + 6),sum += i / 4 * 6 + 6;
  }
  for(int i = 0; i < n; i++) {
    if(sum % 6 == 2 && ans[i] == 8) cout << 6 * ((n + 4) / 4) << ' ';
    else if(sum % 6 == 3 && ans[i] == 9) cout << 6 * ((n + 4) / 4) << ' ';
    else if(sum % 6 == 5 && ans[i] == 9) cout << 6 * (n / 4) + 4 << ' ';
    else cout << ans[i] << ' ';
  }

}