#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  long long n;
  cin >> n;
  vector<long long> V(n + 1);
  long long sum = 0;
  for(int i = 0; i < n; i++) cin >> V[i], sum += V[i];
  V[n] = V[0];
  long long need = n * (n + 1) / 2;
  if(sum % need != 0) {
    cout << "NO" << endl;
    return 0;
  }
  long long k = sum / need;
  vector<long long> A(n);
  
  for(int i = 0; i < n; i++){
    A[i] = V[i + 1] - V[i];
  }
  long long cnt = 0;
  for(int i = 0; i < n; i++){
    A[i] -= k;
  }
  bool ok =true;
  for(int i = 0; i < n; i++){
    if(V[i] < k) ok = false;
    if(A[i] > 0) ok = false;
    else if(A[i] % n != 0) ok = false;
    else cnt += -(A[i] / n);
  }
 // if(cnt != k) cout << "NO" << endl;
  if(!ok) cout << "NO" << endl;
  else cout << "YES" << endl;
  
}