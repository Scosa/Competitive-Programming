#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;cin>>n>>m;

	vector<ll> A(n+1);

	A[0]=0;
	for(int i=1;i<n+1;i++){
		cin>>A[i];A[i]+=A[i-1];
	}
	//for(int i=0;i<n;i++)cout<<A[i]<<endl;

	map<ll,ll> mp;
	for(int i=0;i<n+1;i++){
		mp[A[i]%m]++;
	}

	ll ans=0;
	for(auto i:mp){
		if(i.second<=1)continue;
		else{
			ans+=i.second*(i.second-1)/2;
		}
	}

	cout<<ans<<endl;
}

