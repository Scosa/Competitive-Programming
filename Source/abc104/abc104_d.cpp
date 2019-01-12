#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[3][101010];
int cnt_a;
int cnt;
int cnt_ab;
const int mod = 1000000007;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  cnt = 1;
  int  n = s.size();
  for(int i = 1; i <= n; i++){
    if(s[i - 1] == 'A'){
      dp[0][i] = dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1];
      //dp[0][i] %= mod;
      cnt_a++;
      //cnt_a %= mod;
    }
    else if(s[i - 1] == 'B') {
      cnt_ab +=  cnt_a;
      //cnt_ab %= mod;
      dp[1][i] = dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1];
      //dp[1][i] %= mod;
    }
    else if(s[i - 1] == 'C'){
      dp[2][i] = dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1] + cnt_ab;
      //dp[2][i] %= mod;
    }
    else {
      dp[0][i] = dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1];
      dp[1][i] = dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1];
      dp[2][i] = dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1] + cnt_ab;
      //dp[0][i] %= mod;
      //dp[1][i] %= mod;
      //dp[2][i] %= mod;
      cnt_ab *= 3;
      cnt_ab += cnt_a;
      cnt_a *= 3;
      cnt_a += cnt;
      cnt *= 3;
      //cnt_ab %= mod;
      //cnt_a %= mod;
    }
    cout << cnt_a << ' ' << cnt_ab << endl;
  }
  cout << dp[0][n] + dp[1][n] + dp[2][n] << endl;
}