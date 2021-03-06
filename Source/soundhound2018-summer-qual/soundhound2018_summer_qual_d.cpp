#include <bits/stdc++.h>
using namespace std;


const int MAX_V=10000000;

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
	int m,a,b;
	cin>>V>>m>>a>>b;
	a--;
	b--;
	for(int i=0;i<m;i++){
		int k,l,c,q;
		edge e1,e2,e3,e4;
		cin>>k>>c>>q>>l;
		k--;
		c--;
		e1.to=c;e1.cost=q;
		e2.to=k;e2.cost=q;
		e3.to=c;e3.cost=l;
		e4.to=k;e4.cost=l;
		G[k].push_back(e1);
		G[c].push_back(e2);
		G2[k].push_back(e3);
		G2[c].push_back(e4);
	}

	dijkstra(a);
	dijkstra2(b);

	//or(int i=0;i<V;i++)cout<<d[i]<<" "<<d2[i]<<endl;

	vector<ll> sum(V);
	for(int i=0;i<V;i++){
		sum[i]=(d[i]+d2[i]);
	}
	vector <ll> ans(V);
	ll MIN=inf;
	for(int i=V-1;i>=0;i--){
		ans[i]=min(MIN,sum[i]);
		MIN=ans[i];
	}

	for(int i=0;i<V;i++)cout <<1000000000000000-ans[i] <<endl;


	
}
