#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> A(n);
  for(int i = 0; i < n; i++) cin >> A[i];
 
  vector<int> ANS(n , 0);
  for(int i = n - 2; i >= 0; i--){
    if(A[i] != A[i + 1]){
      if(i % 2 == 0) ANS[i] = ANS[i + 1] + 1;
      else ANS[i] = max(ANS[i + 1] - 1, 0);
    } 
    else {
      ANS[i] = ANS[i + 1];
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
   // cout << ANS[i] << ' ';
    if(ANS[i] % 2 == 0 && A[i] == 0) ans++;
    else if(ANS[i] % 2 == 1 && A[i] == 1) ans++;
  }
  cout << ans << endl;
} 