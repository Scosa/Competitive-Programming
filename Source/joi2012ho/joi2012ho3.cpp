#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dy[6]={-1,-1,-1,0,0,1};
int dp1[3001][3001];//dp1[i][j]==時刻jまででi番目までの夜店の範囲で遊んだときの楽しさの最大値
int dp2[3001][3001];//dp2[i][j]==時刻jまででnからi番目までの夜店の範囲で遊んだときの楽しさの最大値

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,s,t;
	cin>>n>>t>>s;
	vector<int> A(n);
	vector<int> B(n);
	//vector<int> C(n);
	for(int i=0;i<n;i++)cin>>A[i]>>B[i];

	for(int i=1;i<=n;i++){
		for(int j=0;j<=s;j++){
			if(j-B[i-1]<0)dp1[i][j]=dp1[i-1][j];
			else dp1[i][j]=max(dp1[i-1][j],dp1[i-1][j-B[i-1]]+A[i-1]);
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=0;j<=t-s;j++){
			if(j-B[n-i]<0)dp2[i][j]=dp2[i-1][j];
			else dp2[i][j]=max(dp2[i-1][j],dp2[i-1][j-B[n-i]]+A[n-i]);
		}
	}
	
	int ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,dp1[i][s]+dp2[n-i][t-s]);
	}

	cout<<ans<<endl;
}
