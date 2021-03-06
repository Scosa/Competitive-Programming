#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char ans[1011][1001];
char used[1011][1011];
int dx[4]={1,-1,2,-2};
int dy[4]={-2,2,1,-1};


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	
	stack<pair<int,int> > que;
	que.push(make_pair(2,2));


	while(!que.empty()){
		pair<int,int> a=que.top();
		int x=a.first;
		int y=a.second;
		que.pop();
		ans[x][y]='X';
		used[x][y]=true;
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(0<=nx&&nx<=n+1&&0<=ny&&ny<=n+1&&used[nx][ny]==false){
				que.push(make_pair(nx,ny));
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(ans[0][i]=='X')ans[1][i]='X';
		if(ans[n+1][i]=='X')ans[n][i]='X';
		if(ans[i][0]=='X')ans[i][1]='X';
		if(ans[i][n+1]=='X')ans[i][n]='X';
	}





	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(ans[i][j]!='X')cout<<'.';
			else cout<<'X';
		}
		cout<<endl;
	}
}

