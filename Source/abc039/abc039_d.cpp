#include <bits/stdc++.h>
using namespace std;


using namespace std;
typedef long long ll; 
char mas[103][103];
int dx[8]={1,1,1,0,0,-1,-1,-1};
int dy[8]={0,1,-1,1,-1,0,-1,1};
char mas2[103][103];
char mas3[103][103];
bool use[103][103];


int main(){
	int h,w;
	cin >> h >> w;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)cin >> mas[i+1][j+1];
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)mas3[i+1][j+1]=mas[i+1][j+1];
	}
	

	for(int i=0;i<h+1;i++)mas[i][0]='.';
	for(int i=0;i<w+1;i++)mas[0][i]='.';
	for(int i=0;i<h+1;i++)mas[i][w+1]='.';
	for(int i=0;i<w+1;i++)mas[h+1][i]='.';
	mas[h+1][w+1]='.';
	
	for(int i=1;i<h+1;i++){
		for(int j=1;j<w+1;j++){
			if(use[i][j])continue;
			if(mas[i][j]=='.'){
				for(int k=0;k<8;k++)if(mas[i+dx[k]][j+dy[k]]=='#'){mas[i+dx[k]][j+dy[k]]='.';use[i+dx[k]][j+dy[k]]=true;}
			}
		}
	}
	for(int i=0;i<=h+1;i++){
		for(int j=0;j<=w+1;j++){
			use[i][j]=false;
			mas2[i][j]=mas[i][j];
		}
	}
	for(int i=1;i<h+1;i++){
		for(int j=1;j<w+1;j++){
			if(use[i][j])continue;
			if(mas2[i][j]=='#'){
			for(int k=0;k<8;k++){
				if(mas2[i+dx[k]][j+dy[k]]=='.'&&use[i+dx[k]][j+dy[k]]==false){mas2[i+dx[k]][j+dy[k]]='#';use[i+dx[k]][j+dy[k]]=true;continue;}
			}
			}
		}
	}
	

	for(int i=1;i<h+1;i++){
		for(int j=1;j<w+1;j++){
			//cout << mas2[i][j];
			if(mas3[i][j]!=mas2[i][j]){cout << "impossible" << endl;return 0;}
		}
		//cout << endl;
	}
	cout << "possible" << endl;
	for(int i=1;i<h+1;i++){
		for(int j=1;j<w+1;j++){
			cout << mas[i][j];
		}
		cout << endl;
	}
}

