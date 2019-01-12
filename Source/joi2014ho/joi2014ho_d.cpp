#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_V=100010;
const int inf=1<<30;
typedef pair<int,int> P;//firstは最短距離、secondは頂点の番号

class edge{
  public:
  int to,cost;
};

int V;
vector<edge> G[MAX_V];
int d[MAX_V];

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

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m, x;
  cin >> n >> m >> x;
  V = n;
  vector<int> H(n);
  for(int i = 0; i < n; i++) cin >> H[i];
  for(int i = m; i < n; i++){
    int a, b, c;
    cin >> a >> b >> c;
    a--; b--;
    edge s;
    if(H[a] >= c) {
      s.to = b;
      s.cost = c;
      G[a].push_back(s);
    }
    if(H[b] >= c) {
      s.to = a;
      G[b].push_back(s);
    }
  }
  
  dijkstra(0);

}