#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF=10000000000007;
typedef pair<int,int>PII;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//input
	ll k,l,a,b;
	cin>>a>>b>>k>>l;
	ll ans=INF;

	for(int i=0;i*l<k+l;i++){
		ll x=(k-i*l);
		if(x<0)x=0;
		ans=min(ans,i*b+a*x);
	}

	cout<<ans<<endl;



}


