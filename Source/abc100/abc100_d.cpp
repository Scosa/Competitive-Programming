#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	vector<ll> A(n);
	vector<ll> B(n);
	vector<ll> C(n);
	for(int i=0;i<n;i++)cin>>A[i]>>B[i]>>C[i];
	vector<ll> use(n);
	ll olover=0;

	for(int i=0;i<(1<<3);i++){
		for(int j=0;j<n;j++){
			ll sum=0;
			if(i&(1)) sum+=A[j];
			else sum-=A[j];
			if(i&(1<<1))sum+=B[j];
			else sum-=B[j];
			if(i&(1<<2))sum+=C[j];
			else sum-=C[j];
			use[j]=sum;
		}
		sort(use.begin(),use.end(),greater<ll>() );
		ll ans=0;
		for(int i=0;i<m;i++) ans+=use[i];
		olover=max(olover,ans);
	}

	cout<<olover<<endl;


}
