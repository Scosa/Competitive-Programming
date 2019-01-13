#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, a, b;
  cin >> n >> a >> b;
  int x = 0; 
  int y = 0; 
  int z = 0; 
  for(int i = 0; i < n; i++){
    int s;
    cin >> s;
    if(s <= a) x++;
    if(s > a && s <= b) y++;
    if(s > b) z++;  
    }
    cout << min(x, min(y, z)) << endl;
}