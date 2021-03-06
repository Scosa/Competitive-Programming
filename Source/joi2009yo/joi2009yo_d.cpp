#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mas[100][100];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int h,w;
int ans;
bool used[1001][1001];

void dfs(int x,int y,int cnt){
	used[x][y]=true;
	
	for(int i=0;i<4;i++){
		bool update=true;
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(0<=nx&&nx<h&&0<=ny&&ny<w&&mas[nx][ny]==1&&used[nx][ny]==false){
			dfs(nx,ny,cnt+1);
			update=false;
		}
		if(update)ans=max(ans,cnt);
	}
	cnt--;
	used[x][y]=false;
	return;
}



int main(){

	cin>>w>>h;
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
				cin>>mas[i][j];
		}
	} 

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)dfs(i,j,0);
	}

	cout<<ans<<endl;


}
