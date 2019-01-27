#include <bits/stdc++.h>
using namespace std;
#define int long long
int Abit[32][4];
int Bbit[32][4];




signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> B(n);
  for(int i = 0; i < n; i++) {
    cin >> A[i];
    if(A[i] % 2) Abit[0][2]++;
    else Abit[0][0]++;
  }
  for(int i = 0; i < n; i++) {
    cin >> B[i];
    if(B[i] % 2) Bbit[0][2]++;
    else Bbit[0][0]++;
  }
  for(int i = 0; i < n; i++){
    for(int j = 1;j <= 30; j++){
      if(A[i] & (1 << j) && A[i] & 1 << (j - 1)) Abit[j][3]++;
      else if(A[i] & (1 << j) && !(A[i] & 1 << (j - 1))) Abit[j][2]++;
      else if(!(A[i] & (1 << j)) && (A[i] & 1 << (j - 1))) Abit[j][1]++;
      else if(!(A[i] & (1 << j)) && !(A[i] & 1 << (j - 1))) Abit[j][0]++;
      if(B[i] & (1 << j) && B[i] & 1 << (j - 1)) Bbit[j][3]++;
      else if(B[i] & (1 << j) && !(B[i] & 1 << (j - 1))) Bbit[j][2]++;
      else if(!(B[i] & (1 << j)) && (B[i] & 1 << (j - 1))) Bbit[j][1]++;
      else if(!(B[i] & (1 << j)) && !(B[i] & 1 << (j - 1))) Bbit[j][0]++;
    }
  }
  for(int i = 0; i  < 3; i++){
    for(int j = 0; j < 4; j++) cout << Bbit[i][j] << ' ';
    cout << endl;
  }
  int ans = 0;
  int cnt = 0;
  cnt = Abit[0][2] * Bbit[0][0] + Abit[0][0] * Bbit[0][2];
  if(cnt % 2) ans++;
  cnt = 2;
  for(int i = 1; i <= 30; i++){
    int c = 0;
    c += Abit[i][0] * (Bbit[i][2] + Bbit[i][3]);
    c += Abit[i][1] * (Bbit[i][1] + Bbit[i][2]);
    c += Abit[i][2] * (Bbit[i][0] + Bbit[i][1]);
    c += Abit[i][3] * Bbit[i][0];
    if(c % 2) ans += cnt;
    cnt *= 2;
  }
  cout << ans << endl;
}