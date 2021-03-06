#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long GCD(long long a,long long b){
if(b==0)return a;
else return GCD(b,a%b);
}




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n,k;
	cin>>n>>k;
	vector<ll> A(n);
	map <ll,ll> mp;
	for(int i=0;i<n;i++){
		cin>>A[i];
		mp[GCD(A[i],k)]++;
	}
	ll ans=0;
	for(auto i:mp){
		for(auto j:mp){
			ll use1=i.first;
			ll use2=j.first;
			if(use1==use2)continue;
			else{
				if(use1*use2%k==0)ans+=i.second*j.second;
			}
		}
	}
	ans/=2;
	for(auto i:mp){
		ll use1=i.first;
		if(use1*use1%k==0)ans+=(i.second-1)*i.second/2;
	}

	cout<<ans<<endl;



}
