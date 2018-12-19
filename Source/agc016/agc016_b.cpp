#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> A(n);
  int ma, mi;
  for(int i=0;i < n; i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  ma = A[n - 1];
  mi = A[0];
  if(ma - mi > 1) {
    cout << "No" << endl;
    return 0;
  }
  int cnt1 = 0;
  int cnt2 = 0;
  for(int i = 0; i < n; i++){
    if(A[i] == mi) cnt1++;
    if(A[i] == ma) cnt2++;
  }

  if(ma == mi){
    if(ma == n -1) cout << "Yes" << endl;
    else if( 2 * ma <= n) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  else {
    if(cnt1  > mi) cout << "No" << endl;
    else {
      int use = mi - cnt1;
      //cout << use << endl;
      if(use < cnt2 / 2) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
}