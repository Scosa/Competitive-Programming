#include <bits/stdc++.h>
using namespace std;
#define long long int;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int x,y;
  cin >> x >> y;
  if(x == 0 || y == 0) cout << "No" << endl;
  else if(abs(x - y) % 2 != 0) cout << "No" << endl;
  else{
    int use = abs(x - y) / 2;
    if(x > y) swap(x, y);
    x -= use;
    y -= use * 3;
    if(x >= 0 && x % 4 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

}