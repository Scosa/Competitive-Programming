#include <bits/stdc++.h>
using namespace std;
#define long long int;
const int mod=1000000007;
typedef int ll;
const int MAX_N=1000000;

ll mod_pow(ll x,ll n,ll mod){
if(n==0)return 1;
ll res=mod_pow(x*x%mod,n/2,mod);
if(n&1)res=res*x%mod;
return res;
}

ll fact[MAX_N];//階乗
ll revFact[MAX_N];//階乗の逆元

void setFact(int N){
  N++;
  fact[0]=1;
  for(int i=1;i<N;i++){
    fact[i]=fact[i-1]*i;
    //fact[i]%=mod;
  }
  /*revFact[N-1]=mod_pow(fact[N-1],mod-2,mod);
  for(int i=N-2;i>=0;i--){
    revFact[i]=revFact[i+1]*(i+1);
    revFact[i]%=mod;
  }*/
}

ll getC(int a,int b){
  if(a<b)return 0;
  return fact[a]/(fact[a - b] * fact[b]);
}


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int>A(m);
  for(int i = 0; i < m; i++)cin >> A[i];
  double p = 1;
  setFact(n);
  //for(int i = 0; i < n; i++) p *= (double)1 / m;
  for(int i = 0; i < min(n, m); i++) {
    p *= (double)getC(n, A[i]) / m;
    n -= A[i];
  }
  if(n >= m) for(int i = 0; i < n - m; i++) p *= (double)1.0 / (double) m;
  else for(int i = n; i < m; i++) {
    p *= (double)getC(n, A[i]) / m;
    n -= A[i];
  }
  int ans = 0;
  while(1 > p) {
    p *= 10;
    ans++;
  }
  cout << ans << endl;
}