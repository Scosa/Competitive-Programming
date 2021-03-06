#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[101][101][101];




	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n,m;
	cin  >> n >> m;
	for(int i=0;i<n;++i){
		int k,l,s;
		ll t;
		cin >> k >> l >> s >> t;
		dp[k][l][s]=max(dp[k][l][s],t);
	}

	//set
	for(int i=0;i<101;i++)for(int j=0;j<101;j++)for(int k=0;k<101;++k){
		ll s=0,t=0,u=0;
		if(i>0)s=dp[i-1][j][k];
		if(j>0)t=dp[i][j-1][k];
		if(k>0)u=dp[i][j][k-1];
		dp[i][j][k]=max(s,max(t,max(u,dp[i][j][k])));
	}

	for(int i=0;i<m;++i){
		int a,b,c;
		cin >> a >> b >> c;
		cout << dp[a][b][c] << endl;
	}
	
}



