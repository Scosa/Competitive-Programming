#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char mas[1001][1001];
char check[4];
int dx[4]={-1,-1,0,0};
int dy[4]={-1,0,-1,0};
int cnt[1001][1001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h,w;
	cin>>h>>w;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>mas[i][j];
		}
	}
	for(int i=0;i<4;i++){
		cin>>check[i];
	}
	//for(int i=0;i<4;i++)cout<<check[i];

	ll ans=0;
	for(int i=0;i<h-1;i++){
		for(int j=0;j<w-1;j++){
			if(mas[i][j]==check[0]&&mas[i+1][j]==check[2]&&mas[i][j+1]==check[1]&&mas[i+1][j+1]==check[3]){
				ans++;
				cnt[i][j]++;
				cnt[i][j+1]++;
				cnt[i+1][j]++;
				cnt[i+1][j+1]++;
			}
		}
	}
	ll use=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			ll J=-cnt[i][j];
			ll O=-cnt[i][j];
			ll I=-cnt[i][j];
			for(int k=0;k<4;k++){
				int nx=i+dx[k];
				int ny=j+dy[k];
				if(0<=nx&&0<=ny&&nx<h-1&&ny<w-1){
					if(k==0){
						if(mas[nx][ny]==check[0]&&mas[nx+1][ny]==check[2]&&mas[nx][ny+1]==check[1]&&'J'==check[3])J++;
						else if(mas[nx][ny]==check[0]&&mas[nx+1][ny]==check[2]&&mas[nx][ny+1]==check[1]&&'O'==check[3])O++;
						else if(mas[nx][ny]==check[0]&&mas[nx+1][ny]==check[2]&&mas[nx][ny+1]==check[1]&&'I'==check[3])I++;
					}
					else if(k==1){
						if(mas[nx][ny]==check[0]&&mas[nx+1][ny+1]==check[3]&&mas[nx][ny+1]==check[1]&&'J'==check[2])J++;
						else if(mas[nx][ny]==check[0]&&mas[nx+1][ny+1]==check[3]&&mas[nx][ny+1]==check[1]&&'O'==check[2])O++;
						else if(mas[nx][ny]==check[0]&&mas[nx+1][ny+1]==check[3]&&mas[nx][ny+1]==check[1]&&'I'==check[2])I++;
					}
					else if(k==2){
						if(mas[nx][ny]==check[0]&&mas[nx+1][ny]==check[2]&&'J'==check[1]&&mas[nx+1][ny+1]==check[3])J++;
						else if(mas[nx][ny]==check[0]&&mas[nx+1][ny]==check[2]&&'O'==check[1]&&mas[nx+1][ny+1]==check[3])O++;
						else if(mas[nx][ny]==check[0]&&mas[nx+1][ny]==check[2]&&'I'==check[1]&&mas[nx+1][ny+1]==check[3])I++;
					}
					else{
						if('J'==check[0]&&mas[nx+1][ny]==check[2]&&mas[nx][ny+1]==check[1]&&mas[nx+1][ny+1]==check[3])J++;
						else if('O'==check[0]&&mas[nx+1][ny]==check[2]&&mas[nx][ny+1]==check[1]&&mas[nx+1][ny+1]==check[3])O++;
						else if('I'==check[0]&&mas[nx+1][ny]==check[2]&&mas[nx][ny+1]==check[1]&&mas[nx+1][ny+1]==check[3])I++;
					}
					
				}
			}
			use=max(use,max(J,max(O,I)));

		}
	}
    ans+=use;
	cout<<ans<<endl;
}
