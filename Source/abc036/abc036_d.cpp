#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//int dp[100010];
vector< vector<int> > G(100010);
bool use[100010];
typedef pair<ll,ll> P;
const ll mod=1000000007;

P dfs(int s){
	use[s]=true;
	P res;res.first=1;res.second=1;
	for(int i=0;i<G[s].size();i++){
		if(!use[G[s][i]]) {
			P cnt=dfs(G[s][i]);
			res.first*=(cnt.first+cnt.second);
			res.second*=(cnt.first);
			res.first%=mod;
			res.second%=mod;
		}
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;cin>>a>>b;
		a--;b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	P ans=dfs(0);
	cout<<(ans.first+ans.second)%mod<<endl;
}
