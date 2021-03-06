#include <bits/stdc++.h>
using namespace std;

int dp[1<<20];
int cnt[21][100001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;cin>>a;a--;
		cnt[a][i]++;
	}
	for(int i=0;i<m;i++){
		for(int j=1;j<=n;j++) cnt[i][j]+=cnt[i][j-1];
	}
	for(int i=0;i<(1<<m);i++) dp[i]=n;

	dp[0]=0;
	for(int i=1;i<(1<<m);i++){
		int l=0;
		for(int j=0;j<m;j++){
			if(i&(1<<j)) l+=cnt[j][n]; 
		}

		for(int j=0;j<m;j++){
			if(i&(1<<j)) dp[i]=min(dp[i],dp[i^(1<<j)]+cnt[j][n]-(cnt[j][l]-cnt[j][l-cnt[j][n]]));
		}
	}

	cout<<dp[(1<<m)-1]<<endl;
}
