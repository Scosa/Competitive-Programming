#include <bits/stdc++.h>
using namespace std;

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
		par[y]=par[x];
		if(deep[x]== deep[y]) deep[x]++;
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
	vector<int> vec(n);
	for(int i=0;i<n;i++)cin>>vec[i],vec[i]--;
	init(n);
	for(int i=0;i<m;i++){
		int k,l;
		cin >> k>>l;
		k--;
		l--;
		unit(k,l);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(same(vec[i],i))ans++;
	}
	cout << ans << endl;
}
