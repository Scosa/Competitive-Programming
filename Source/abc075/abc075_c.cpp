#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int> > G(1919);
bool use[1911];
void dfs(int a,int b,int s){
	use[s]=true;
	for(int i=0;i<G[s].size();i++){
		int to=G[s][i];
		if(a==s&&b==to) continue;
		if(!use[to])dfs(a,b,to);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>m>>n;
	vector<pair<int,int> > P;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		P.push_back(make_pair(a,b));
		G[a].push_back(b);
		G[b].push_back(a);
	}
	int ans=0;

	for(int i=0;i<n;i++){
		int a=P[i].first;
		int b=P[i].second;
		memset(use,0,sizeof(use));
		dfs(a,b,a);
		if(!use[b])ans++;
	}

	cout<<ans<<endl;
	
}
