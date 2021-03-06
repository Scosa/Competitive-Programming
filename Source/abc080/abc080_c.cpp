#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int F[101][20];
int P[101][20];



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	for(int i=0;i<n;i++)for(int j=0;j<10;j++)cin>>F[i][j];
	for(int i=0;i<n;i++)for(int j=0;j<11;j++)cin>>P[i][j];

	ll ans=-INT_MAX;

	for(int i=1;i<(1<<10);i++){
		ll cnt=0;
		for(int k=0;k<n;k++){
			int use=0;
			for(int j=0;j<10;j++)if(((i>>j)&1)&&F[k][j])use++;
			cnt+=P[k][use];
		}
		ans=max(ans,cnt);
	}

	cout<<ans<<endl;

}
