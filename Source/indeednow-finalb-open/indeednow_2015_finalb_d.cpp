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
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h,w;
	cin>>h>>w;
	V=h*w;
	int sx,sy,gx,gy;
	cin>>sx>>sy>>gx>>gy;
	int mas[101][101];
	ll ans=0;

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			int k;
			cin>>k;
			ans+=k;
			mas[i][j]=k;
		}
	}


	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			int use=i*w+j;
			for(int s=0;s<4;s++){
				int nx=i+dx[s];
				int ny=j+dy[s];
				if(0<=nx&&nx<h&&0<=ny&&ny<w){
					int use2=nx*w+ny;
					edge e;
					e.from=use;
					e.to=use2;
					e.cost=-1*(mas[i][j]*mas[nx][ny]);
					es.push_back(e);
				}
			}

		}
	}
	E=es.size();
	ans+=-(kruskal());
	cout<<ans<<endl;
}
