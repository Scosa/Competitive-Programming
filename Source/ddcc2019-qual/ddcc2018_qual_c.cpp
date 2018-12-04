#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> use(202020);
const ll mod=1000000007;
void d(int s){
	use[1]=1;
	for(int i=2;i<=s;i++){
		ll res=1;
		ll res2=1;
		for(int j=0;j<10;j++)res*=i,res2*=(i-1),res%=mod,res2%=mod;
		use[i]=((res+mod)-res2)%mod;
	}
}
ll cluc(int t){
	ll res=1;
	for(int i=0;i<10;i++) res*=t,res%=mod;
	return res;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	d(n);
//	for(int i=1;i<=n;i++) cout<<use[i]<<endl;
	ll ans=0;
	for(int i=1;i<=n;i++){
		int s=n/i;
		ll a=cluc(s);
		ans+=use[i]*a;
		ans%=mod;
	}
	cout<<ans<<endl;
}
