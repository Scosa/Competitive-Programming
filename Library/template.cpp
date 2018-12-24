#include <bits/stdc++.h>
using namespace std;
#define int long long
bool memo[2][100010];

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  vector<vector<int> > V(n);
  for(int i = 0; i < m; i++ ){
    int a, b;
    cin >> a >> b;
    a--; b--;
    V[a].push_back(b);
    V[b].push_back(a);
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < V[i].size(); j++){
      if(s[V[i][j]] == 'R') memo[1][i] = true;
      else memo[0][i] = true;
    }
  }

  for(int i = 0; i < n; i++){
    if(k % 2 == 1){
      if(memo[0][i]) cout << "First" << endl;
      else cout << "Second" << endl;
    }
    else {
      if(s[i] == 'R') cout << "Second" << endl;
      else {
        bool ok = false;
        for(int j = 0; j < V[i].size(); j++) {
          if(!memo[1][V[i][j]]) {
            ok = true;
            break;
          }
        }
        if(ok) cout << "First" << endl;
        else cout << "Second" << endl;
      }
    }
  }

}