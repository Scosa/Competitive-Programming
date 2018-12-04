#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll d,n,m;
	cin>>d>>n>>m;
	vector<ll> dis1(n);
	vector<ll> dis2(n);
	dis1[0]=0;
	dis2[0]=0;
	for(int i=1;i<n;i++){
		cin>>dis1[i];
		dis2[i]=-dis1[i];
	}
	dis1.push_back(d);
	dis2.push_back(-d);
	sort(dis1.begin(),dis1.end());
	sort(dis2.begin(),dis2.end());
	long long ans=0;

	for(int i=0;i<m;i++){
		ll k;
		cin>>k;
		ll use1=*lower_bound(dis1.begin(),dis1.end(),k)-k;
		ll use2=*lower_bound(dis2.begin(),dis2.end(),-k)+k;
		//cout<<use1 <<" "<<use2<<endl;
		ans+=min(use1,use2);
	}


	cout<<ans<<endl;
	
}
