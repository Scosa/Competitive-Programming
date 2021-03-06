#include <bits/stdc++.h>
using namespace std;
const int MAX_V=100010;
const int inf=1<<30;
typedef pair<int,int> P;//firstは最短距離、secondは頂点の番号

class edge{
	public:
	int to,cost;
};

int V;
vector<edge> G[MAX_V];
long long d[MAX_V];

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> >que;
	fill(d,d+V+1,inf);
	d[s]=0;
	que.push(P(0,s));

	while(!que.empty()){
		P p=que.top();que.pop();
		long long  v=p.second;
		if(d[v]<p.first) continue;
		for(int i=0;i<G[v].size();++i){
			edge e=G[v][i];
			if(d[e.to]>d[v]+e.cost){
				d[e.to]=d[v]+e.cost;
				que.push(P(d[e.to],e.to));
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m,k;
	cin >> V >> m >> k;
	vector<pair<int ,int > > S;
	vector<int> L(m);
	for(int i = 0; i < m; i++){
		int a,b,l;
		cin >> a >> b >> l;
		edge e;
		L[i]=l;
		e.to = b;
		e.cost = l;
		G[a].push_back(e);
		e.to = a;
		G[b].push_back(e);
		S.push_back(make_pair(a,b));
	}

	for(int i = 0; i < k; i++){
		edge e;
		cin >> e.to;
		e.cost = 0;
		G[0].push_back(e);
	}

	dijkstra(0);

	long long ans=0;
	//for(int i = 1; i <= V; i++) ans = max(ans, d[i]),cout << d[i] << endl;

	for(int i = 0;i < m; i++){
		//if(d[S[i].first]==d[S[i].second]){
			ans = max(ans,(d[S[i].first] + d[S[i].second] + L[i] + 1)/2);
		//}
	}
	cout << ans << endl;
}
