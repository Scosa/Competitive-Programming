#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000;

ll dp[1001][1001];

int main(){
	int n,m;
	cin>>n>>m;

	vector<ll> vec(n);
	vector<ll> C(m); 
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	for(int i=0;i<m;i++){
		cin>>C[i];
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(j==0){dp[i][j]=0;continue;}
			dp[i][j]=INF;
		}
	}


	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=min(dp[i-1][j],dp[i-1][j-1]+C[i-1]*vec[j-1]);
		}
	}

	cout<<dp[m][n]<<endl;
}
