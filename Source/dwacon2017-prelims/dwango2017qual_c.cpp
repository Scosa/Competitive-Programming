#include <bits/stdc++.h>
using namespace std;
typedef long long ll;






int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n; 
	map <ll,ll> mp;
	for(int i=0;i<n;i++){
		int k;cin>>k;mp[k]++;
	}
	
	ll ans=0;ans+=mp[4]+mp[3]+mp[2]/2;mp[1]=max(mp[1]-mp[3],(ll)0);
	mp[2]%=2;
	ans+=(mp[1]+mp[2]*2+3)/4;

	cout<<ans<<endl;
}
