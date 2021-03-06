#include <bits/stdc++.h>
using namespace std;
long long dp[20010];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	long long k;
	cin >> n >> m >> k;
	vector<long long > A(n);
	for(int i = 0; i < n; i++) cin >> A[i];

	
	dp[0] = 0;
	for(int i = 1; i <= n; i++) {
		dp[i] = dp[i-1] + k;
		long long ma = A[i-1];
		long long mi = A[i-1];
		for(int j = i; j >= max(1,i-m+1); j--){
			ma = max(ma, A[j-1]);
			mi = min(mi, A[j-1]);
			dp[i] = min(dp[i], dp[j-1] + (i-j+1)*(ma-mi) + k);
		}
	}

	cout << dp[n] << endl;


}
