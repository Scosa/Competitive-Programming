#include <bits/stdc++.h>
using namespace std;

const int MAX_V=100010;
const int inf=1<<30;
typedef pair<long long,int> P;//firstは最短距離、secondは頂点の番号
bool use[MAX_V];

class edge{
	public:
	long long to,cost;
};

int V;
vector<edge> G[MAX_V];
pair<long long,int>  d[MAX_V];

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> >que;
	for(int i = 0; i < V; i++) d[i].first = 101010101000;
	d[s].first = 0;
	que.push(P(0,s));

	while(!que.empty()){
		P p=que.top();que.pop();
		int v=p.second;
		if(d[v].first<p.first) continue;
		for(int i=0;i<G[v].size();++i){
			edge e=G[v][i];
			if(d[e.to].first>d[v].first+e.cost){
				d[e.to].first=d[v].first+e.cost;
				que.push(P(d[e.to].first,e.to));
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m, c;
	cin >> V >> m >> c;
	long long sum = 0;
	for(int i = 0; i < m; i++){
		int a,b,d;
		cin >> a >> b >> d;
		a--; b--;
		sum += d;
		edge e;
		e.to = b; e.cost = d;
		G[a].push_back(e);
		e.to = a;
		G[b].push_back(e);
	}

	dijkstra(0);
	for(int i = 0; i < V; i++) d[i].second = i;
	sort(d, d+V);

	long long ans = 101010100101;
	for(int i = 0; i < V; i++){
		long long cnt = c * d[i].first;
		use[d[i].second] = true;
		for(int j = 0; j < G[d[i].second].size(); j++) {
			if(use[G[d[i].second][j].to]) sum -=G[d[i].second][j].cost;
		}
		cnt += sum;
		ans = min(cnt, ans);
	}

	cout << ans << endl;

}
