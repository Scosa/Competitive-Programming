#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
bool ok[501][501];



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int r,c,k;
	cin >> r >> c >> k;
	vector<string> vec(r);
	for(int i=0;i<r;i++){
		cin >> vec[i];
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(vec[i][j]=='x'){
				for(int l=-k+1;l<k;l++){
					int limit=k-abs(l)-1;
					for(int t=-limit;t<=limit;t++){
						int x=i+l;
						int y=j+t;
						//cout << x << ' ' << y << endl;
						if(0<=x&&x<r&&0<=y&&y<c)
						ok[i+l][j+t]=true;
					}
				}
			}
		}
	}

		int ans=0;
		for(int i=k-1;i<r-k+1;i++){
			for(int j=k-1;j<c-k+1;j++){
				if(!ok[i][j])ans++;
			}
		}
	cout << ans << endl;
}
