#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b){
  if(b==0)return a; 
  else return GCD(b,a%b);
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a < b) cout << "No" << endl;
    else if(b > d) cout << "No" << endl;
    else{
      a %= b;
      d %= b;
      long long use = GCD(b, d);
      long long dist = b - a - 1;
      long long need = dist / use * use + a;
      if(need <= c) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
}