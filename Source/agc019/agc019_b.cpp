#include <bits/stdc++.h>
using namespace std;
long long mp[27];


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  long long n = s.size();

  
  for(int i = 0;i < n; i++){
    mp[s[i] - 'a']++;
  }
  long long ans = n * (n - 1)/ 2;
  for(int i = 0;i < 26; i++){
    //cout << mp[i] << ' '; 
    ans -= mp[i] * (mp[i] - 1) / 2;
  }
  cout << ans + 1 << endl;
}