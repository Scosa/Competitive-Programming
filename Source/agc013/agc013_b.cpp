#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<bool> use(100010);





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;cin>>n>>m;
	vector<vector<int> > edge(n+1);
	for(int i=0;i<m;i++){
		int k,l;cin>>k>>l;
		edge[k].push_back(l);
		edge[l].push_back(k);
	}

	deque<int> path;
	path.push_back(edge[1][0]);
	path.push_front(1);
	use[1]=true;
	use[edge[1][0]]=true;
	while(1){
		int f=path.front();
		bool ok=true;
		for(int i=0;i<edge[f].size();i++){
			if(!use[edge[f][i]]){
				ok=false;
				path.push_front(edge[f][i]);
				use[edge[f][i]]=true;
				break;
			}
		}
		if(!ok)continue;
		int b=path.back();
		for(int i=0;i<edge[b].size();i++){
			if(!use[edge[b][i]]){
				ok=false;
				path.push_back(edge[b][i]);
				use[edge[b][i]]=true;
				break;
			}
		}
		if(ok){
			cout<<path.size()<<endl;
			for(int i=0;i<path.size();i++){
				cout<<path[i]<<' ';
			}
			cout<<endl;return 0;
		}
	}
}
