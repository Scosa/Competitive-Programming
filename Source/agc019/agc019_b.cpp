#include <bits/stdc++.h>
using namespace std;
long long calc(int s){
  long long res = 0;
  for(int i= 0; i <= s; i++) res += i;
  return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  int n = s.size();
  long long cnt = n;
  for(int i = 0; i < n - 1; i++){
    if(s[i] == s[i + 1]){
      cnt++;
      int l = i;
      int r = i + 1;
      while(true){
        l--;
        r++;
        if(l < 0 || n - 1 < r) break;
        if(s[l] != s[r]) break;
        cnt++;
      }
    } 
  }

  for(int i = 1; i < n - 1; i++){
    if(s[i - 1] == s[i + 1]) {
      cnt++;
      int l = i - 1;
      int r = i + 1;
      while(true){
        l--;
        r++;
        if(l < 0 || n - 1 < r) break;
        if(s[l] != s[r]) break;
        cnt++;
      }
    }
  }

  long long ans = calc(n) - cnt;
  cout << ans << endl;
}