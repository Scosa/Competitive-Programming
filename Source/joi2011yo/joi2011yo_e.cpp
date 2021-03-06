#include <bits/stdc++.h>
using namespace std;
char maze[1010][1010];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int h,w;
bool use[1010][1010];




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> h >> w >> n;
	vector<pair<int,int> > V(n + 1);

	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++) {
			cin >> maze[i][j];
			if(maze[i][j] == 'S') V[0].first = i,V[0].second = j; 
			if(maze[i][j] == '1') V[1].first = i,V[1].second = j; 
			if(maze[i][j] == '2') V[2].first = i,V[2].second = j; 
			if(maze[i][j] == '3') V[3].first = i,V[3].second = j; 
			if(maze[i][j] == '4') V[4].first = i,V[4].second = j; 
			if(maze[i][j] == '5') V[5].first = i,V[5].second = j; 
			if(maze[i][j] == '6') V[6].first = i,V[6].second = j; 
			if(maze[i][j] == '7') V[7].first = i,V[7].second = j; 
			if(maze[i][j] == '8') V[8].first = i,V[8].second = j; 
			if(maze[i][j] == '9') V[9].first = i,V[9].second = j; 
		}
	}
//	cout << V[0].first << V[0].second << endl;


	int ans = 0;
	for(int i = 0; i < n; i++){
		queue< pair <pair<int, int>, int >  > que;
		que.push(make_pair(V[i],0));
		memset(use,false,sizeof(use));

		while(true){
			int nx = que.front().first.first;
			int ny = que.front().first.second;
			int cnt = que.front().second;
			//cout << nx << ' ' << ny << endl;
			que.pop();
			use[nx][ny] = true;
			if(maze[nx][ny] == (char)('1' + i)) {
				ans += cnt;
				break;
			}
			for(int i = 0; i < 4; i++){
				int x = nx + dx[i];
				int y = ny + dy[i];
				if(0 <= x && x < h && 0 <= y && y < w && maze[x][y] != 'X' && use[x][y] == false) {
					use[x][y] = true;
					que.push(make_pair(make_pair(x,y),cnt+1));	
				}
			}
		}
		
	}

	cout << ans << endl;
}
