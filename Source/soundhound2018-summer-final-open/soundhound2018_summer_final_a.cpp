#include <bits/stdc++.h>
using namespace std;

typedef long long ll;





int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll c,d;cin>>c>>d;
	vector<ll> S;
	vector<ll> G;
	ll cnt=140;ll cnt2=170;
	while(1){
		if(cnt2>1000000000000000)break;
		S.push_back(cnt);
		G.push_back(cnt2);
		cnt*=2;
		cnt2*=2;
	}
	//G[G.size()-1]=1000000000000001;
	//for(int i=0;i<S.size();i++)cout<<S[i]<<' '<<G[i]<<endl;
	ll ans=0;
	for(int i=0;i<S.size();i++){
		if(c<=S[i]&&d>=G[i])ans+=G[i]-S[i];
		else if(S[i]<=c&&d<=G[i])ans+=d-c;
		else if(G[i]>c&&G[i]<=d)ans+=G[i]-c;
		else if(S[i]>=c&&S[i]<d)ans+=d-S[i];
	}


	cout<<ans<<endl;

	
}

