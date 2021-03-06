#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
ll use(ll a,ll b){
	int cnt_A=0;
	int cnt_B=0;
	while(a>0){
		cnt_A++;
		a/=10;
	}
	while(b>0){
		cnt_B++;
		b/=10;
	}

	return max(cnt_A,cnt_B);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n;
	cin>>n;
	ll ans=15;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){
			ans=min(ans,use(i,n/i));
		}
	}

	cout<<ans<<endl;
}
