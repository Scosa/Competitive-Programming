#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> B(n);
  vector<pair<int,int> > V(n);
  for(int i = 0; i < n ; i++){
    cin >> A[i] >> B[i];
    V[i].first = A[i] + B[i];
    V[i].second = i;
  }
  sort(V.begin(),V.end());
  int cnt = 0;
  int T = 0;
  int Ao = 0; 
  for(int i = n - 1; i >= 0; i--){
    if(cnt % 2 == 0){
      T += A[V[i].second];
    }
    else {
      Ao += B[V[i].second];
    }
    cnt++;
  }
  cout << T - Ao << endl;
}