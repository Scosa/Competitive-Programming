#include <bits/stdc++.h>
using namespace std;



map<long long,long long > prime_factor(long long a){
  map<long long,long long> res;
  for(long long i=2;i*i<=a;i++){
    while(a%i==0){
      ++res[i];
      a/=i;
    }
  }
  if(a!=1)res[a]=1;
  return res;
}	 		

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long n, p;
  cin >> n >> p;
  map<long long, long long> mp ;
  mp = prime_factor(p);
  long long ans = (long long)1;

  for(auto i: mp){
    if(i.second >= n) {
      long long s = i.second / n;
      for(long long j = 0; j < s ; j++) ans *= i.first;
    }
  }
  cout << ans << endl;
}