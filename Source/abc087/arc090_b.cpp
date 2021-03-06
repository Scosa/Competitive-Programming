#include <bits/stdc++.h>
using namespace std;

const int MAX_N=100000;
int par[MAX_N];//親
int  deep[MAX_N];//木の深さ
int diff_weight[MAX_N];//ノードの重さ

//n要素で初期化
void init(int n){
	for(int i=0;i<n;i++){
		par[i]=i;
		deep[i]=0;
		diff_weight[i]=0;
	}
}

//木の根を求める(経路圧縮)（根までの距離を重みとして累積和でとる）
int find(int x){
	if(par[x]==x){
		return x;
	}
	else{
		int r=find(par[x]);
		diff_weight[x]+=diff_weight[par[x]];
		return par[x]=r;
	}
}

//重みを求める
int weight(int x){
	find(x);
	return diff_weight[x];
}

//xとyの距離
int diff(int x,int y){
	return diff_weight[y]-diff_weight[x];
}

//xとyの属する集合を併合
//weight(y)-weght(x)=wとなるように併合
bool unit(int x,int y,int w){
	w+=weight(x);
	w-=weight(y);
	x=find(x);
	y=find(y);
	if(x==y)return false;

	if(deep[x]< deep[y]){
		par[x]=y;
		diff_weight[x]=-1*w;
		return true;
	}
	else{
		par[y]=x;
		if(deep[x]== deep[y]) deep[x]++;
		diff_weight[y]=w;
		return true;
	}
}

//xとyが同じ集合に属するかいなか
bool same(int x,int y){
	return find(x)==find(y);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	init(n);

	bool ok=true;
	for(int i=0;i<m;i++){
		int l,r,d;
		cin>>l>>r>>d;
		l--;
		r--;
		if(!unit(l,r,d)&&d!=diff(l,r)) ok=false;
	}
	if(ok)cout<<"Yes"<<endl;
  	else cout<<"No"<<endl;
}

