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
	int n;
	cin >> n;
	init(n);
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		k--;
		unit(i,k);
	}
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		vec[i]=find(i);
	}
	sort(vec.begin(),vec.end());
	int ans=0;
	int cnt=1;
	for(int i=0;i<n-1;i++){
		if(vec[i]==vec[i+1])cnt++;
		else{
			if(cnt%2==1){cout <<-1<<endl;return 0;}
			ans+=(cnt+1)/2;
			cnt=1;
		}	
	}
	if(cnt%2==1){cout <<-1<<endl;return 0;}
	ans+=(cnt+1)/2;
	cout<<ans<<endl;
}
