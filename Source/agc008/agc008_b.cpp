#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=100000000007;
vector<ll> F(2);





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k;cin>>n>>k;
	vector<ll> A(n+1,0);
	vector<ll> B(n+1,0);
	cin>>A[1];
	B[1]=max((ll)0,A[1]);
	for(int i=2;i<n+1;i++)cin>>A[i],B[i]=max((ll)0,A[i]),A[i]+=A[i-1],B[i]+=B[i-1];

//	for(int i=0;i<n+1;i++)cout<<A[i]<<' '<<B[i]<<endl;

	ll ans=0;
	for(int i=0;i<n;i++){
		if(i+k-1>=n)break;
		ll cnt=max(A[i+k]-A[i],(ll)0)+B[i]+(B[n]-B[i+k]);
		ans=max(ans,cnt);
	}

	cout<<ans<<endl;
}
