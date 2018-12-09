#include <bits/stdc++.h>
using namespace std;
const int MAX_V=100010;
const int inf=1<<30;
class con{
  public:
  int dist, num, st, time;
};
int state[MAX_V];
int n, m, x;

class edge{
  public:
  int to,cost;
};

int V;
vector<edge> G[MAX_V];
int d[MAX_V];
bool comp(con a, con b){
  return a.dist > b.dist;
}

void dijkstra(int s){
  priority_queue<con,comp >que;
  fill(d,d+V,inf);
  d[s]=0;
  con t;
  t.dist = 0;t.num = 0;t.st = 0;t.time = 0;
  que.push(t);

  while(!que.empty()){
    con p = que.top(); que.pop();
    int v = p.num;
    if(v == V - 1) {
      cout << p.dist << endl;
      return;
    }
    int ss = p.st;
    int t = p.time;
    for(int i=0;i<G[v].size();++i){
      edge e = G[v][i];
      if(t + e.cost >= x){
        if(d[e.to] > d[v] + e.cost ) d[e.to] = d[v] + e.cost;
        con y;y.num = e.to; y.dist = d[v] + e.cost;y.time = t + e.cost;
        if(state[e.to] == 1) y.st = 1,y.time = 0;
        else if(state[e.to] == 3) y.st = 3;y.time = 0; 
        que.push(y);
      }
      else if(ss == 1){
        if(state[e.to] == 3) continue;
        if(d[e.to] > d[v] + e.cost ) d[e.to] = d[v] + e.cost;
        con y;y.num = e.to; y.dist = d[v] + e.cost;y.time = t + e.cost;
        if(state[e.to] == 1) y.st = 1,y.time = 0;
        que.push(y);
      }
      else {
        if(state[e.to] == 1) continue;
        if(d[e.to] > d[v] + e.cost ) d[e.to] = d[v] + e.cost;
        con y;y.num = e.to; y.dist = d[v] + e.cost;y.time = t + e.cost;
        if(state[e.to] == 3) y.st = 3,y.time = 0;
        que.push(y);
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> V >> m >> x;
  for(int i = 0; i < n; i++) cin >> state[i],state[i]++:
  for(int i = 0; i < m; i++){
    edge e;int a;
    cin >> a >> e.to >> e.cost;a--;e.to--;
    G[a].push_back(e);
    swap(e.to, a);
    G[a].push_back(e);
  }
  dij(0);
}