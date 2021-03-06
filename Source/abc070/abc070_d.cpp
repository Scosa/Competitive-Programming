#include <bits/stdc++.h>
using namespace std;
const int MAX_V=100100;
typedef long long ll;
const ll inf=1010101010100101010;
typedef pair<ll,ll> P;//firstは最短距離、secondは頂点の番号

class edge{
    public:
    ll to,cost;
};

ll V;
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
    for(int i=0;i<V-1;i++) {
        edge e;ll k;
        cin>>k>>e.to>>e.cost;k--;e.to--;
        G[k].push_back(e);
        swap(k,e.to);
        G[k].push_back(e);
    }

    int k,q;cin>>q>>k;k--;
    dijkstra(k);

    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;a--;b--;
        cout<<d[a]+d[b]<<endl;
    }
}
