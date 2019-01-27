#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_N=100010;
int par[MAX_N];//親
int  deep[MAX_N];//木の深さ
 vector<bool> used(101010);

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


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int> A(n);
  init(n);
  for(int i = 0; i < n; i++) cin >> A[i];
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    unit(a, b);
  }
  if((n - m - 1) * 2 > n){
    cout << "Impossible" << endl;
    return 0;
  }
  unordered_map<int, int> mp;
  for(int i = 0; i < n; i++){
    mp[find(i)]++;
   // cout << find(i) << ' ';
  }
  //cout << endl;
  if(mp.size() == 1) {
    cout << 0 << endl;
    return 0;
  }
  int ans = 0;
  int cnt = 0;
  vector<pair<int, int> > V;
  for(auto i: mp){
    if(i.second == 1) ans += A[i.first], cnt++,used[i.first] = true;
  }
  for(int  i = 0; i < n; i++){
    if(mp[par[i]] > 1) {
      pair<int, int> P;
      P.first = A[i];
      P.second = i;
      V.push_back(P);
    }
  }
  sort(V.begin(), V.end());
  int cnt1 = 0;
  int cnt2 = 0;
  ans += V[0].first;
  used[V[0].second] = true;
  cnt1++;
  for(int i = 0; i < V.size() - 1; i++){
    if(same(V[0].second, V[i + 1].second) && cnt1 < n - m - 1 - cnt) {
      ans += V[i + 1].first;
      used[V[i + 1].second] = true;
      cnt1++;
    }
    else if(!same(V[0].second, V[i + 1].second) && cnt2 < n - m - 1 - cnt){
      ans += V[i + 1].first;
      used[V[i + 1].second] = true;
      cnt2++;
      unit(V[0].second, V[i + 1].second);
    }
  }
  
  vector<int> B;
  for(int i = 0; i < n; i++) {
    if(!used[i]){
      B.push_back(A[i]);
    }
  }
  sort(B.begin(),B.end());
  for(int i = 0; i < cnt; i++){
    ans += B[i];
  }
  cout << ans << endl;

}