#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b){
if(b==0)return a;
else return GCD(b,a%b);
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  long long n, m;
  string s,t;
  cin >> n >> m >> s >> t;

  long long use = GCD(n, m);
  long long ans = n * m / use;

  long long a = ans / n;
  long long b = ans / m;
  long long use2 = a * b / GCD(a, b);

  for(int i = 0; i <= ans / use2; i ++){
    //cout << i << endl;
    if(s[i * use2 / a] != t[i * use2 / b]) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
}