#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod=1000000007;

int d[301][301];
int check[301][301];
int V;

void warshall_floyd(){
	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++) d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		}
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>V;
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++)cin>>d[i][j],check[i][j]=d[i][j];
	}
	
	warshall_floyd();

	ll ans=0;

	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(d[i][j]<check[i][j]){cout<<-1<<endl;return 0;}
			bool need=true;
			for(int k=0;k<V;k++){
				if(k==i||k==j)continue;
				if(d[i][k]+d[k][j]==d[i][j])need=false;
			}
			if(need)ans+=d[i][j];
		}
		
	}

	cout<<ans/2<<endl;

	
}
