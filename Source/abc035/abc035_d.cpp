#include <bits/stdc++.h>
using namespace std;


const int MAX_V=100001;

typedef long long ll;
const ll inf=1000000000000001;
typedef pair<ll,int> P;//firstは最短距離、secondは頂点の番号

class edge{
	public:
	int to,cost;
};

int V;
vector<edge> G[MAX_V];
ll d[MAX_V];

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> >que;
	fill(d,d+V,inf);
	d[s]=0;
	que.push(P(0,s));

	while(!que.empty()){
		P p=que.top();que.pop();
		int v=p.second;
		if(d[v]<p.first) continue;
		for(int i=0;i<G[v].size();i++){
			edge e=G[v][i];
			if(d[e.to]>d[v]+e.cost){
				d[e.to]=d[v]+e.cost;
				que.push(P(d[e.to],e.to));
			}
		}
	}
}


vector<edge> G2[MAX_V];
ll d2[MAX_V];

void dijkstra2(int t){
	priority_queue<P,vector<P>,greater<P> >que;
	fill(d2,d2+V,inf);
	d2[t]=0;
	que.push(P(0,t));

	while(!que.empty()){
		P p=que.top();que.pop();
		int v=p.second;
		if(d2[v]<p.first) continue;
		for(int i=0;i<G2[v].size();i++){
			edge e=G2[v][i];
			if(d2[e.to]>d2[v]+e.cost){
				d2[e.to]=d2[v]+e.cost;
				que.push(P(d2[e.to],e.to));
			}
		}
	}
}



int main(){
	int m,t;
	cin>>V>>m>>t;
	vector<int> A(V);
	for(int i=0;i<V;i++) cin>>A[i];
	for(int i=0;i<m;i++){
		int k,l,p;
		cin>>k>>l>>p;
		k--;l--;
		edge e;
		e.to=l;
		e.cost=p;
		G[k].push_back(e);
		e.to=k;
		G2[l].push_back(e);
	}
	dijkstra(0);
	dijkstra2(0);

	ll ans=0;
	for(int i=0;i<V;i++){
		ll use=d[i]+d2[i];
		if(use>=t)continue;
		use=(t-use)*A[i];
		ans=max(ans,use);
	}

	cout<<ans<<endl;
}
