#include <bits/stdc++.h>
using namespace std;
long long dp[1010][8];
const int mod = 10007;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	string s;
	cin >> n >> s;
	

	if(s[0] == 'J') dp[1][4]++,dp[1][5]++,dp[1][6]++,dp[1][7]++;
	else if(s[0] == 'O') dp[1][6]++,dp[1][7]++;
	else dp[1][5]++,dp[1][7]++;

	for(int i = 2; i <= n; i++){
		if(s[i-1] == 'J'){
			dp[i][4] = (dp[i-1][4] + dp[i-1][5] + dp[i-1][6] + dp[i-1][7])%mod;
			dp[i][5] = (dp[i][4] + dp[i-1][1] + dp[i-1][3])%mod;
			dp[i][6] = (dp[i][4] + dp[i-1][2] + dp[i-1][3])%mod; 
			dp[i][7] = (dp[i][6] + dp[i-1][1])%mod;
		}
		else if(s[i-1] == 'O'){
			dp[i][2] = (dp[i-1][2] + dp[i-1][3] + dp[i-1][6] + dp[i-1][7])%mod;
			dp[i][3] = (dp[i][2] + dp[i-1][1] + dp[i-1][5])%mod;
			dp[i][6] = (dp[i][2] + dp[i-1][4] + dp[i-1][5])%mod;
			dp[i][7] = (dp[i][6] + dp[i-1][1])%mod;
		}
		else {
			dp[i][1] = (dp[i-1][1] + dp[i-1][3] + dp[i-1][5] + dp[i-1][7])%mod;
			dp[i][3] = (dp[i][1] + dp[i-1][2] + dp[i-1][6])%mod;
			dp[i][5] = (dp[i][1] + dp[i-1][4] + dp[i-1][6])%mod;
			dp[i][7] = (dp[i][5] + dp[i-1][2])%mod; 
		}
	}

	long long ans=0;
	for(int i = 1;i < 8; i++) ans += dp[n][i],ans%=mod;// cout << dp[n][i] << ' ';

	cout << ans%mod << endl;
}

