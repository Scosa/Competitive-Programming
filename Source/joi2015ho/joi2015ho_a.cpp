#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

      int n, m;
      cin >> n >> m;
      vector<int> V(n + 2,0);
      int pre;
      cin >> pre;
      for(int i = 0; i < m - 1; i++){
            int a = 0;
            cin >> a;
            if(pre < a) V[pre]++,V[a]--;
            else V[pre]--,V[a]++;
           pre = a;
      } 
      vector<long long> A(n),B(n),C(n);
      for(int i = 0; i < n - 1; i++) cin >> A[i] >> B[i] >> C[i];
      for(int i = 1; i <= n; i++){
            V[i] += V[i - 1];
      //      cout << V[i] << ' ';
      }
      long long ans = 0;
      for(int i = 1; i < n; i++){
            ans += min(A[i - 1] * V[i], B[i - 1] * V[i] + C[i - 1]);
      }
      cout << ans << endl;
}