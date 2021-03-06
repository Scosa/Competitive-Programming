#include <bits/stdc++.h>
using namespace std;

const int MAX_N=1000001;
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
int par2[MAX_N];//親
int  deep2[MAX_N];//木の深さ

//n要素で初期化
void init2(int n){
	for(int i=0;i<n;i++){
		par2[i]=i;
		 deep2[i]=0;
	}
}

//木の根を求める
int find2(int x){
	if(par2[x]==x){
		return x;
	}
	else{
		return par2[x]=find2(par2[x]);
	}
}

//xとyの属する集合を併合
void unit2(int x,int y){
	x=find2(x);
	y=find2(y);
	if(x==y)return;

	if( deep2[x]< deep2[y]){
		par2[x]=y;
	}
	else{
		par2[y]=par2[x];
		if(deep2[x]== deep2[y]) deep2[x]++;
	}
}

//xとyが同じ集合に属するかいなか
bool same2(int x,int y){
	return find(x)==find(y);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m,k,l;
	cin >> m >> k>>l;
	init(m);
	init2(m);
	for(int i=0;i<k;i++){
		int a,b;
		cin>>a>>b;
		a--;b--;
		unit(a,b);
	}
	for(int i=0;i<l;i++){
		int a,b;
		cin>>a>>b;
		a--;b--;
		unit2(a,b);
	}

	map<pair<int,int> ,int > s;


	for(int i=0;i<m;i++){
		int a=find(i);
		int b=find2(i);
		s[make_pair(par[i],par2[i])]++;
	}

	for(int i=0;i<m;i++){
		cout<<s[make_pair(par[i],par2[i])]<<' ';
	}
	cout<<endl;
}
