#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[501][10011];//dp[i][j]==i番目までの箱でj個以上饅頭を入れるときの価格の最小値
const int INF=1<<30;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m,n;
	cin>>m>>n;
	vector<int> P(m);
	vector<int> C(n);
	vector<int> E(n);
	for(int i=0;i<m;i++)cin>>P[i];
	for(int i=0;i<n;i++)cin>>C[i]>>E[i];

	sort(P.begin(),P.end());
	vector<ll> sum(m);
	sum[0]=P[m-1];
	for(int i=1;i<m;i++){
		sum[i]+=sum[i-1]+P[m-i-1];
	}

	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++)dp[i][j]=INF;
	}
	for(int i=0;i<n+1;i++)dp[i][0]=0;

	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			//if(j<C[i-1])dp[i][j]=dp[i-1][j];
			 dp[i][j]=min(dp[i-1][j],dp[i-1][max(j-C[i-1],0)]+E[i-1]);
		}
	}
	ll ans=0;
	for(int i=1;i<m+1;i++){
		ans=max(ans,sum[i-1]-dp[n][i]);
	}

	cout<<ans<<endl;
}
