#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[51];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector<int> sum(n+1);
	sum[0]=0;
	for(int i=1;i<=n;i++)cin>>sum[i],sum[i]+=sum[i-1];
	int ans=10101010;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			int limit=sum[j]-sum[i];
		//	cout<<limit<<endl;
			for(int i=0;i<=n;i++)dp[i]=10000010;
			dp[0]=0;

			for(int k=1;k<=n;k++){
				bool ok=false;
		
				for(int s=k-1;s>=0;s--){
						if(sum[k]-sum[s]>=limit) {
							dp[k]=min(dp[k],max(dp[s],sum[k]-sum[s]));
						}

				}

			}
			int cnt=0;
			//for(int i=0;i<=n;i++)cout<<dp[i]<<endl;

			if(dp[n]!=sum[n])ans=min(ans,dp[n]-limit);
		}
	}
	cout<<ans<<endl;
}

