#include <bits/stdc++.h>
using namespace std;
vector<int> V(2020);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> A(n);
  for(int i = 0; i < n; i++) cin >> A[i],V[A[i]]++;
  int m;
  cin >> m;
  for(int i = 0; i < m ;i++) {
    int k;
    cin >> k;k--;
    if(A[k]+1 > 2019) continue;
    else if(V[A[k] + 1] == 1) continue;
    else V[A[k]]--,V[A[k] + 1]++,A[k]++;
  }
  for(int i = 1; i < 2020; i++){
    if(V[i] == 1) cout << i << endl;
  }
}