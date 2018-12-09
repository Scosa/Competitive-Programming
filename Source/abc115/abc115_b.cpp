#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  int sum = 0;
  int ma = 0;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    sum += a;
    ma = max(ma, a);
  }
  cout << sum - ma / 2 << endl;
}