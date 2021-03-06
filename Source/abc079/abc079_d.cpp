#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_V=1000;
int d[MAX_V][MAX_V];//d[i][j]==辺(i,j)のコスト
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

	int h,w;
	cin>>h>>w;
	V=10;
	for(int i=0;i<10;i++)for(int j=0;j<10;j++)cin>>d[i][j];
	warshall_floyd();
	
	ll ans=0;

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			int k;
			cin>>k;
			if(k==-1)continue;
			ans+=d[k][1];
		}
	}

	cout<<ans<<endl;
//	cout<<d[8][1]<<endl;

}
