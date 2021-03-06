#include <bits/stdc++.h>
using namespace std;
int dp[201][201];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int D,N;
	cin >> D >> N;
	vector<int> T(D);
	for(int i=0;i<D;i++) cin >> T[i];
	vector<int> A(N);
	vector<int> B(N);
	vector<int> C(N);
	for(int i=0;i<N;i++) cin >> A[i] >> B[i] >> C[i];


	//dp[i][j]=i日目にj番目の服を着た時の最大値
	memset(dp,-1,sizeof(dp));
	
	for(int i=0;i<D;i++){
		for(int j=0;j<N;j++){
			if(A[j]>T[i]||B[j]<T[i])continue;
			if(i==0){dp[i][j]=0;continue;}
			int ans=0;
			for(int k=0;k<N;k++) if(dp[i-1][k]!=-1)ans=max(ans,dp[i-1][k]+abs(C[k]-C[j]));
			dp[i][j]=ans;
		}
	}

	//max_search
	int ans=-1;
	for(int i=0;i<N;i++)ans=max(ans,dp[D-1][i]);

	//output 
	cout << ans << endl;
}
