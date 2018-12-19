#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int cnt = 0;
  long long ans = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'W') ans += (i - cnt), cnt++;
  }
  cout << ans << endl;
}