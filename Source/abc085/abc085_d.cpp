#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=1<<30;
int dp[42][402][402];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,h;
	cin>>n>>h;
	vector<int> A(n);
	vector<int> B(n);
	for(int i=0;i<n;i++)cin>>A[i]>>B[i];
	sort(B.begin(),B.end());
	sort(A.begin(),A.end());

	int ans=0;
	for(int i=0;i<n;i++){
		if(h<=0){cout<<ans<<endl;return 0;}
		if(A[n-1]>B[n-i-1])break;
		h-=B[n-1-i];
		ans++;
	}

	ans+=(h+A[n-1]-1)/A[n-1];
	cout<<ans<<endl;

}
