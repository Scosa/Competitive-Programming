#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<string> S(401);
bool use[401][401];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int h, ww,w, b, r;

void dfs(int x, int y){
  //cout << x << ' ' << y << endl;
  if(S[x][y] == '#') b++;
  else ww++;
  use[x][y] = true;
  for(int k = 0; k < 4; k++){
    int nx = x + dx[k]; 
    int ny = y + dy[k]; 
    //cout << nx << ' ' << ny << endl;
    if(S[x][y] == '#' && 0 <= nx && nx < h && 0 <= ny && ny < w && use[nx][ny] == false && S[nx][ny] == '.') dfs(nx, ny);
    if(S[x][y] == '.' && 0 <= nx && nx < h && 0 <= ny && ny < w && use[nx][ny] == false && S[nx][ny] == '#') dfs(nx, ny);
  }
}


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> h >> w;
  int ans = 0;

  for(int i = 0; i < h; i++){
    cin >> S[i];
  }
  
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++) {
    // cout << i << j << endl;
      b = 0;
      ww= 0;
      if(!use[i][j]) dfs(i, j);
     // cout << b << ' ' << w << ' ';
      ans += b * ww;
    }
  }
  cout << ans << endl;
}