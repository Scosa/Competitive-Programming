#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

const int MAX_V=100100;
const int inf=1<<30;
typedef pair<int,int> P;//firstは最短距離、secondは頂点の番号
int m,k,s,p,q;

class edge{
	public:
	int to,cost;
};

int V;
vector<edge> G[MAX_V];
int d[MAX_V];
bool iszonbi[MAX_V];
void bfs(){
  queue<pair<int, int > > que;
  que.push(P(0,0));
  while(!que.empty()){
    P p = que.front();que.pop();
    int v = p.first;
    int d = p.second;
    if(d > s + 1) continue;
    iszonbi[v] = true;
    for(int i = 0; i < G[v].size(); i++){
      edge e = G[v][i];
      if(!iszonbi[e.to])que.push(P(e.to, d + 1));
    } 
  } 
}

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> >que;
	fill(d,d+V,inf);
	d[s]=0;
	que.push(P(0,s));

	while(!que.empty()){
		P p=que.top();que.pop();
		int v=p.second;
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

	cin >> V >> m >> k >> s >> p >> q;
  for(int i = 0; i < k; i++){
    edge e;
    cin >> e.to;e.cost = 0;
    G[0].push_back(e);
  }
  vector<int> A(m),B(m);
  for(int i = 0; i < m; i++){
    edge e;int a;
    cin >> a >> e.to;e.cost = q;
    A[i] = a;
    B[i] = e.to;
    G[a].push_back(e);
    swap(e.to, a);
    G[a].push_back(e);
  }
  bfs();
  iszonbi[V] = false;
  iszonbi[0] = false;
  for(int i = 0; i < m; i++){
    if(iszonbi[A[i]] == false && iszonbi[B[i]] == false) {
      edge e;
      e.to = B[i];
      e.cost = p;
      int a = A[i];
      G[a].push_back(e);
      swap(a, e.to);
      G[a].push_back(e);
    }
  }
  dijkstra(1);
  cout << d[V] << endl;
}

