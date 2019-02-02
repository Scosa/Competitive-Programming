#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int> > Eto(101010);

vector<int> V(101010);
vector<int> D(101010);
vector<int> ans(101010);



signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  for(int i = 0; i < n + m - 1; i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    Eto[a].push_back(b);
    D[b]++;
    V[b]++;
  }
  int root;
  for(int i  = 0; i  < n; i++) if(V[i] == 0) root = i;
  
  queue<int> que;
  que.push(root);
  ans[root] = 0;
  while(!que.empty()){
    int s = que.front();
    que.pop();
    for(int i = 0; i < Eto[s].size(); i++) {
      if(D[Eto[s][i]] == 1){
        que.push(Eto[s][i]);
        ans[Eto[s][i]] = s + 1;
      }
      else D[Eto[s][i]]--;
    }
  }

  for(int i = 0; i < n; i++) cout  << ans[i] << endl;
  
}