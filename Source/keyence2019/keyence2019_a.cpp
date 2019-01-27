#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check[4];

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  map<int,int> mp;
  mp[a]++;
  mp[b]++;
  mp[c]++;
  mp[d]++;
  for(auto i: mp){
    if(i.first == 1) check[0] = true;
    if(i.first == 9) check[1] = true;
    if(i.first == 7) check[2] = true;
    if(i.first == 4) check[3] = true;
  }
  for(int i = 0; i < 4; i++) {
    if(!check[i]){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}