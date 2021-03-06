#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=1<<30;
int dp[42][402][402];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,MA,MB;
	cin>>n>>MA>>MB;
	vector<int> A(n);
	vector<int> B(n);
	vector<int> C(n);
	for(int i=0;i<n;i++)cin>>A[i]>>B[i]>>C[i];


	for(int i=0;i<=n;i++){
		for(int j=0;j<401;j++){
			for(int k=0;k<401;k++){
				if(j==0&&k==0){dp[i][j][k]=0;continue;}
				dp[i][j][k]=INF;
			}
		}
	}



	for(int i=1;i<=n;i++){
		for(int j=1;j<401;j++){
			for(int k=1;k<401;k++){
				if(j<A[i-1]||k<B[i-1])dp[i][j][k]=dp[i-1][j][k];
				else dp[i][j][k]=min(dp[i-1][j][k],dp[i-1][j-A[i-1]][k-B[i-1]]+C[i-1]);
			}
		}
	}

	int ans=INF;
	for(int i=1;i<=min(400/MA,400/MB);i++){
		ans=min(ans,dp[n][MA*i][MB*i]);
	}
	if(ans==INF)cout<<-1<<endl;
	else cout<<ans<<endl;
}
