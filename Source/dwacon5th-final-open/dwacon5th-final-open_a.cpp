#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll n, m ,k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  vector<vector< ll > > V(n);
  for(int i = 0; i < m ; i++) {
    int a, b;
    cin >> a >> b;a--;b--;
    V[a].push_back(b);
    V[b].push_back(a);
  }
  for(int i = 0; i < n; i++)
{
  if(k % 2 == 1){
    
    
    bool ok = true;
    for(int j = 0 ; j < V[i].size(); j++) {
      if(s[V[i][j]] == 'B') {
        ok = false;
        break;
      }
    }
    if(ok) cout << "Second" << endl;
    else cout << "First" << endl;
    
  }
  else{
    if(s[i] == 'R') cout << "Second" << endl;
    else {
      bool ok;
      for(int j = 0 ; j < V[i].size(); j++) {
        ok = true;
        for(int k = 0; k < V[j].size(); k++){
          if(s[V[j][k]] == 'R') {
            ok = false;
            break;
          }
        }
        if(ok) break;
      }
      if(ok) cout << "First" << endl;
      else cout << "Second" << endl;
    }
  }
  
}
}