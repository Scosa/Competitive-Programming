#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo1[55];
ll memo2[55];
ll ans;
ll clac(ll s){
  ll res = 1;
  for(int i = 0;i < s + 2;i++) res *= 2;
  return memo1[s] = res - 3; 
}
ll alac(ll s){
  ll res = 1;
  for(int i = 0;i < s + 1;i++) res *= 2;
  return memo2[s] = res - 1; 
}
void rec(ll a ,ll x){
  if(a == 0){
    ans += 1;
    return;
  }
  ll use = clac(a);
  if(x == use / 2 + 1) {
    ans += alac(a - 1) + 1;
    return;
  }
  else if(x == use){
    ans += 2 * alac(a - 1) + 1;
    return;
  }
  else if(x == 1){
    return;
  }
  else if((use / 2 + 1) > x){
    rec(a - 1, x - 1);
    return;
  }
  else if((use / 2 + 1) < x){
    ans += alac(a - 1) + 1;
    rec(a - 1,x - (use / 2 + 1));
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  ll n, m;
  cin >> n >> m;
  rec(n, m);
  cout << ans << endl;
}