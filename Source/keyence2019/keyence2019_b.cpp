#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    for(int j = i; j < s.size(); j++){
      if("keyence" == s.substr(0,i) + s.substr(j, s.size() - j)) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
}