#include <bits/stdc++.h>
using namespace std;

const int MAX_V=310;
long long d[MAX_V][MAX_V];
int V;
int INF=1<<30;
void init(){
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			d[i][j]=INF;
			if(i==j)d[i][j]=0;
		}
	}
}

void warshall_floyd(){
	
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
}

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m;
	cin>>V>>m;
	init();
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		a--;
		b--;
		d[a][b]=c;
		d[b][a]=c;
	}

	warshall_floyd();
	long long ans=INF;

	for(int i=0;i<V;i++){
		long long use=0;
		for(int j=0;j<V;j++){
			use=max(d[i][j],use);
		}
		ans=min(use,ans);
	}

	cout<<ans<<endl;
}
