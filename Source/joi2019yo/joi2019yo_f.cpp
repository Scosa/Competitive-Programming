#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod =10007;
ll clac(int s){
  ll res = 1;
  for(int i = 1; i <= s; i++) {res *= i;res %= mod;}
  return res%mod;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  ll n;
  cin >> n;
  if(n > 6) {
    cout << 1 << endl;
    return 0;
  }
  vector<ll> A;
  ll res1 = 1;
  for(int i = 0; i < n; i++) {
    ll k;cin >> k;
    for(int j = 0; j < k; j++) A.push_back(i + 1);
    res1 *= clac(k);
  }
  ll ans = 0;
  sort(A.begin(),A.end());
  do{
    for(int i = 0; i < A.size() - 1;i++){
      //cout << A[i] << ' ';
      if(A[i] == A[i + 1] || A[i] == A[i + 1] + 1||A[i] == A[i + 1] - 1) break;
      if(i == A.size() - 2) ans++;
    }
    //cout << endl;
    
  }while(next_permutation(A.begin(),A.end()));
  cout << (ans*res1)%mod  << endl;
}