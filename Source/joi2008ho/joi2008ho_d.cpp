#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[151][11][76];
ll slip[151][11];
ll dis[151][11];
const ll INF=10000000000001;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		for(int j=0;j<k;j++){
			cin>>dis[i][j]>>slip[i][j];
		}
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<=m;k++)dp[i][j][k]=INF;
		}
	}
	for(int i=0;i<10;i++)dp[0][i][m]=0,dp[1][i][m-1]=0;

	for(int i=1;i<n;i++){
		for(int j=0;j<10;j++){
			if(!slip[i][j]) continue;
			for(int s=0;s<=m;s++){
				for(int k=0;k<10;k++){
					if(slip[i-1][k]==0)continue;
					dp[i][j][s]=min(dp[i][j][s],dp[i-1][k][s]+(slip[i-1][k]+slip[i][j])*abs(dis[i-1][k]-dis[i][j]));
				}
				if(i==1)continue;
				if(s!=m){
					for(int k=0;k<10;k++){
						if(slip[i-2][k]==0)continue;
						dp[i][j][s]=min(dp[i][j][s],dp[i-2][k][s+1]+(slip[i-2][k]+slip[i][j])*abs(dis[i-2][k]-dis[i][j]));
						}
				}
			}
		}
	}

	ll ans=INF;
	for(int i=0;i<10;i++) for(int j=0;j<=m;j++) {
		ans=min(ans,dp[n-1][i][j]);
		if(j>0)ans=min(ans,dp[n-2][i][j]);
	}

	cout<<ans<<endl;


}
