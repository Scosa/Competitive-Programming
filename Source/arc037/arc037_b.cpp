#include <bits/stdc++.h>
using namespace std;

const int MAX_N=100000;
int edge[MAX_N];
int par[MAX_N];//親
int  deep[MAX_N];//木の深さ
map<int,int> check;

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
  if(x==y){edge[x]++;return;}

  if( deep[x]< deep[y]){
    par[x]=y;
    edge[y]+=edge[x]+1;
    edge[x]=0;
  }
  else{
    par[y]=x;
    if(deep[x]== deep[y]) deep[x]++;
    edge[x]+=edge[y]+1;
    edge[y]=0;
  }
}

//xとyが同じ集合に属するかいなか
bool same(int x,int y){
  return find(x)==find(y);
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  //input
  int n,m;
  cin>>n>>m;
  init(n);
  for(int i=0;i<m;i++){
    int k,l;
    cin>>k>>l;
    k--;l--;
    unit(k,l);
  }
 int ans=0;
  

  for(int i=0;i<n;i++){
    int x=find(i);
    check[x]++;
  }
 // cout <<endl;
  for(auto i:check){
    if(i.second-edge[i.first]==1)ans++;
  }

  cout<<ans<<endl;
}
