#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,a,b;
  cin >> n >> a >> b;
  if((b - a) % 2 == 0) cout << "Alice" << endl;
  else cout << "Borys" << endl;
}