#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<vector<int> > L(100001);
const int MAX_N=100002;
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





int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		for(int j=0;j<k;j++){
			int s;cin>>s;
			s--;L[s].push_back(i);
		}
	}
	init(n);


	for(int i=0;i<m;i++){
		if(L[i].size()<2)continue;
		for(int j=0;j<L[i].size()-1;j++){
			unit(L[i][j],L[i][j+1]);
		}
	}

	bool check=true;
	for(int i=0;i<n;i++){
		if(!same(i,i+1))check=false;
	}

	if(check)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	
}

