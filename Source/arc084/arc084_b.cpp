#include <bits/stdc++.h>
using namespace std;

const int MAX_V=10000000;
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


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin>>V;
  for(int i=1;i<V;i++){
    edge e;
    e.cost=1;
    e.to=i+1;
    if(i+1==V) e.to=0;
    G[i].push_back(e);
    e.to=i*10%V;
    e.cost=0;
    G[i].push_back(e);
  }
  dijkstra(1);

  cout<<d[0]+1<<endl;
}
