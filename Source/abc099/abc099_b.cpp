#include <bits/stdc++.h>
using namespace std;
#define int long long
class edge{
  public:
  int to, cost;
};

vector<vector<edge> > V;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    edge s;int a;
    cin >> a >> s.to >> s.cost;
    V[a].push_back(s);
    swap(s.to, a);
    V[a].push_back(s);
  }
  int ans = 0;
  for(int i = 1; i<= n; i++){
    for(int j = 0; j < V[i].size(); j++){
      for(int k = 0; k < V[i].size(); k++){
        if(j != k && V[i][j].cost + V[i][k].cost == 2540) ans++; 
      }
    }
  }
  cout << ans/ 2 << endl;
}