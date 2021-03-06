#include <bits/stdc++.h>
using namespace std;
int dp[100010];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	if(n<6){
		cout<<n<<endl;return 0;
	}
	for(int i=1;i<=n;i++)dp[i]=1000000;
	dp[0]=0;
	for(int i=1;i<=n;i++){
		int cnt=6;
		while(cnt<=i){
			dp[i]=min(dp[i],dp[i-cnt]+1);
			cnt*=6;
		}
		cnt=9;
		while(cnt<=i){
			dp[i]=min(dp[i],dp[i-cnt]+1);
			cnt*=9;
		}
	}
	int ans=10000;
	for(int i=1;i<=n;i++)ans=min(ans,dp[i]+(n-i));
	
	 cout<<ans<<endl;
}
