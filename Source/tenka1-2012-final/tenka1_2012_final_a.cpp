#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=100000000007;
vector<ll> F(2);





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n;cin>>n;
	F[0]=1;F[1]=1;

	for(int i=2;;i++){
		if(F[i-1]>mod)break;
		F.push_back(F[i-1]+F[i-2]);
	}
	ll ans=0;
	while(n){
		for(int i=F.size()-1;i>=0;i--){
			if(F[i]<=n)n-=F[i],ans++;
		}
	}

	cout<<ans<<endl;

}
