#include <bits/stdc++.h>
using namespace std;
#define int long long
int cluc(int a){
    int res = 1;
    for(int i = 0; i < a; i++) res *= 2;
    return res;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  int  p;
  cin >> p;
  int E = 0;
  int O = 0;
  for(int i = 0; i < n; i++) {
      int k;
      cin >> k;
      if(k % 2) O++;
      else E++;
  }
    cout << cluc(n) - 1 << endl;
  
}