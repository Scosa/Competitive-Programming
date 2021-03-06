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

	int m,r;
	cin>>V>>m>>r;
	init();
	vector<int> R(r);
	for(int i=0;i<r;i++)cin>>R[i],R[i]--;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		a--;
		b--;
		d[a][b]=c;
		d[b][a]=c;
	}

	warshall_floyd();

	sort(R.begin(),R.end());
	long long ans=INF;

	do{
		long long use=0;
		for(int i=0;i<r-1;i++){
			use+=d[R[i]][R[i+1]];
		}
		ans=min(ans,use);
	}while(next_permutation(R.begin(),R.end()));
	cout<<ans<<endl;

}
