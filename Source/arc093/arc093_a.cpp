#include <bits/stdc++.h>
using namespace std;
typedef long long ll;






int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;vector<int> A(n+1);
	A[0]=0;
	for(int i=1;i<=n;i++)cin>>A[i];
	A.push_back(0);
	ll ans=0;
	for(int i=1;i<=n+1;i++){
		ans+=abs(A[i]-A[i-1]);
	}
	for(int i=1;i<=n;i++){
		if(A[i]>=A[i-1]&&A[i]<=A[i+1])cout<<ans<<endl;
		else /*if(A[i]>A[i-1]&&A[i]>A[i+1])*/cout<<ans-(abs(A[i]-A[i+1])+abs(A[i]-A[i-1]))+abs(A[i-1]-A[i+1])<<endl;

	}
}
