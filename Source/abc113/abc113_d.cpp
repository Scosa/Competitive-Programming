#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
typedef long long ll;
ll dp[102][10];//dp[i][j]==i列目までででjにいる通り数
//dp[i+1][j]=dp[i][j]+dp[i][j+1]+dp[i][j-1];
ll use1[10];

ll use(int k){

	if(k<=0)return 1;
	if(k==1)return 2;
	if(use1[k]!=0)return use1[k];
	ll res=0;
	for(int i=0;i<(1<<k);i++){
		bool ok=true;
		for(int l=0;l<k-1;l++){
			if((i&(1<<l))&&i&(1<<(l+1)))ok=false;
		}
		if(ok)res++;
	}
	return use1[k]=res;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h,w,k;
	cin>>h>>w>>k;
	k--;
	if(w==1){cout<<1<<endl;return 0;}
	dp[0][0]=1;
	for(int i=1;i<=h;i++){
		for(int j=0;j<w;j++){
			if(j==0)dp[i][j]=dp[i-1][j]*use(w-2)%mod+dp[i-1][j+1]*use(w-3)%mod,dp[i][j]%=mod;

			else if(j==w-1)dp[i][j]=dp[i-1][j]*use(w-2)%mod+dp[i-1][j-1]*use(w-3)%mod,dp[i][j]%=mod;

		
			else dp[i][j]=((dp[i-1][j]*use(j-1))%mod)*use(w-1-(j+1))%mod+((dp[i-1][j-1]*use(j-2))%mod)*use(w-1-(j+1))%mod+((dp[i-1][j+1]*use(j-1))%mod)*use(w-1-(j+2))%mod,dp[i][j]%=mod;
		}
	}

	cout<<dp[h][k]<<endl;
}
