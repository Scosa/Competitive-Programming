#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n2,x;
	cin>>n2>>x;
	vector<int> A(n2*2);
	vector<int> use(n2,0);
	for(int i=0;i<n2;i++){
		cin>>A[i];
		A[n2+i]=A[i];
	}
	
	ll ans=100000000000000;
	for(int i=0;i<n2;i++)use[i]=A[i];

	for(int i=0;i<n2;i++){
		ll cnt=0;
		for(int j=n2;j<2*n2;j++){
			use[j-n2]=min(use[j-n2],A[j-i]);
			cnt+=use[j-n2];
		}
		ans=min(ans,cnt+x*i);
	}

	cout<<ans<<endl;
}
