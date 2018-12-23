#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<ll> A(n);


  bool ok = false;
  for(int i = 0; i< n;i++){
    cin >> A[i];
    if(A[i] % 2 == 1) ok = true;
    }
  if(ok) cout << "first" << endl;
  //else if(cnt == 1 && maxn % 2 == 1) cout << "first" << endl;
  else cout << "second" << endl;
}