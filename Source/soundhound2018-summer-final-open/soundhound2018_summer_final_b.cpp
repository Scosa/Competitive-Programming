#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
//dp[i]==i番目までで効能の最大値  遷移はi番目をひっくり返すかどうか




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k;cin>>n>>k;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	vector<ll> dp(n+1,0),before(n+1,0);
	for(int i=1;i<=n;i++) {
		dp[i]=dp[i-1]+A[i-1];
		if(i>=k) {
			dp[i]=max(dp[i],before[i-k]);
		}
		before[i]=max(before[i-1],dp[i]);
	}
	cout << dp[n] << endl;
}
