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

    for(int i = 0; i < G[v].size(); i++){
      edge e = G[v][i];
      if(!iszonbi[e.to] && d < s + 1)que.push(P(e.to, d + 1)),iszonbi[e.to] = true;
    } 
  } 
}

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> >que;
	fill(d,d+V + 1,inf);
	d[s]=0;
	que.push(P(0,s));

	while(!que.empty()){
		P s=que.top();que.pop();
		int v=s.second;
		if(d[v]<s.first) continue;
		for(int i=0;i<G[v].size();++i){
			edge e=G[v][i];
                  if(e.to == V - 1) e.cost = 0;
                  else if(!iszonbi[e.to]) e.cost = p;
                  else e.cost = q;
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
  V++;
  for(int i = 0; i < k; i++){
    edge e;
    cin >> e.to;e.cost = 0;
    G[0].push_back(e);
  }
  vector<int> A(m),B(m);
  for(int i = 0; i < m; i++){
    edge e;int a;
    cin >> a >> e.to;e.cost = 0;
    //if(a == V - 1 || e.to == V - 1) e.cost = 0; 
    G[a].push_back(e);
    swap(e.to, a);
    G[a].push_back(e);
  }
  bfs();
  iszonbi[V - 1] = false;
  iszonbi[1] = false;
  /*for(int i = 0; i < m; i++){
    if(iszonbi[A[i]] == false && iszonbi[B[i]] == false) {
      edge e;
      e.to = B[i];
      e.cost = p;
      int a = A[i];
      G[a].push_back(e);
      swap(a, e.to);
      G[a].push_back(e);
    }
  }*/
  dijkstra(1);
  for(int i = 1; i < V; i++) cout << d[i] << endl;
}

