#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int a,b,c;
  cin >> a >> b >> c;
  int cnt = 0;
  for(int i = 1;; i++){
    cnt += a;
    if(i % 7 == 0) cnt += b;
    if(cnt >= c) {
      cout << i << endl;
      return 0;
    } 
  }
}