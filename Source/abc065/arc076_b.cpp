#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>PII;


const int MAX_E=100000;
const int MAX_N=100000;
int par[MAX_N];//親
int  deep[MAX_N];//木の深さ

//n要素で初期化
void init(int n){
	for(int i=0;i<n;i++){
		par[i]=i;
		 deep[i]=0;
	}
}

//木の根を求める
int find(int x){
	if(par[x]==x){
		return x;
	}
	else{
		return par[x]=find(par[x]);
	}
}

//xとyの属する集合を併合
void unit(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y)return;

	if( deep[x]< deep[y]){
		par[x]=y;
	}
	else{
		par[y]=x;
		if(deep[x]== deep[y]) deep[x]++;
	}
}

//xとyが同じ集合に属するかいなか
bool same(int x,int y){
	return find(x)==find(y);
}

class edge{
	public:
	ll from,to,cost;
};
int V,E;
vector<edge> es;

bool comp(const edge& e1,const edge& e2){
	return e1.cost<e2.cost;
}

ll kruskal(){
	sort(es.begin(),es.end(),comp);
	init(V);
	int res=0;
	for(int i=0;i<es.size();i++){
		edge e=es[i];
		if(!same(e.from,e.to)){
			unit(e.from,e.to);
			res+=e.cost;
		}
	}

	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>V;
	int sx,sy;
	cin>>sx>>sy;
	vector<PII> X(V);
	vector<PII> Y(V);
	X[0].first=0;
	Y[0].first=0;
	X[0].second=0;
	Y[0].second=0;
	for(int i=1;i<V;i++){
		ll nx,ny;
		cin>>nx>>ny;
		X[i].first=nx-sx;
		Y[i].first=ny-sy;
		X[i].second=i;
		Y[i].second=i;
	}

	sort(X.begin(),X.end());
	sort(Y.begin(),Y.end());
	//for(int i=0;i<V;i++)cout << X[i].first<<" "<<Y[i].first<<endl;
	for(int i=0;i<V-1;i++){
		edge ex,ey;
		ex.from=X[i].second;
		ey.from=Y[i].second;
		ex.to=X[i+1].second;
		ey.to=Y[i+1].second;
		ex.cost=X[i+1].first-X[i].first;
		ey.cost=Y[i+1].first-Y[i].first;
		es.push_back(ex);
		es.push_back(ey);
	}

	ll ans=kruskal();

	cout<<ans<<endl;
}
