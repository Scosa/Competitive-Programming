#include <bits/stdc++.h>
using namespace std;
int dp[201][201];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n,k;
	cin >> n >> k;
	long long ans=0;
	if(k==0)ans-=n;

	for(int i=1;i<=n;i++){
		ans+=n/i*max(i-k,0)+max(n%i+1-k,0);
	}

	cout << ans << endl;
}
