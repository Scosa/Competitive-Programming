#include <bits/stdc++.h>
using namespace std;
bool dp[101][10001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	dp[0][0]=true;
	for(int i=1;i<=n;i++){
		for(int j=0;j<10001;j++){
			if(j<A[i-1])dp[i][j]=dp[i-1][j];
			else dp[i][j]=dp[i-1][j-A[i-1]]|dp[i-1][j];
		}
	}
	for(int i=10000;i>=0;i--){
		if(!i)cout<<0<<endl;
		if(dp[n][i]&&i%10){
		cout<<i<<endl;return 0;
	} 
	}
}
