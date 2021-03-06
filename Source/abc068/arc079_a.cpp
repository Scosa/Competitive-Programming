#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int> > G(201919);
bool use[201911];
void dfs(int s,int cnt){
	if(cnt>2) return;
	use[s]=true;
	for(int i=0;i<G[s].size();i++){
		int to=G[s][i];
		if(!use[to])dfs(to,cnt+1);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>m>>n;

	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	

	dfs(1,0);

	if(use[m])cout<<"POSSIBLE"<<endl;
	else cout<<"IMPOSSIBLE"<<endl;
	
}
