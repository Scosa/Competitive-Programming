#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=1<<30;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,x;string s;cin>>n>>x>>s;
	ll ans=0;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		if(s[i]=='0')ans+=k;
		else ans+=min(x,k);
	}

	cout<<ans<<endl;
}
