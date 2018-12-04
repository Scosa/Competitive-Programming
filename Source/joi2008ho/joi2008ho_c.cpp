#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,m;
	cin>>n>>m;
	vector<ll> vec(n);
	for(int i=0;i<n;i++)cin>>vec[i];

	set<ll> s;
	for(int i=0;i<n;i++)s.insert(-vec[i]);
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++) s.insert(-(vec[i]+vec[j]));
	}

	ll ans=0;


	for(auto i:s){
		ll use=m+i;
		//cout<<i<<endl;;
		use=-use;
		auto ite=s.lower_bound(use);
		if(ite==s.end())continue;
		ans=min(ans,i+*ite);
	}

	cout<<-ans<<endl;
	
}
