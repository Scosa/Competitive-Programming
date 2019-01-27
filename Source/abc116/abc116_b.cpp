#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int s;
  cin >> s;
  map<int,int> mp;
  mp[s]++;
  for(int i = 1; ; i++){
    if(s % 2) s = 3*s + 1;
    else s /= 2;
    if(mp[s]) {
      cout << i + 1 << endl;
      return 0;
    }
    mp[s]++;
  }
}