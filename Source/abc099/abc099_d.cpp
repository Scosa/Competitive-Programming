#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=100000000000000;
int D[51][51];
int X;
int use[4][31];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,c;
	cin>>n>>c;
	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++)cin>>D[i][j];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cin>>X,use[(i+j)%3][X-1]++;
	}




	/*for(int i=0;i<3;i++){
		for(int j=0;j<use[i].size();j++)cout<<use[i][j]<<' ';
		cout<<endl;
	}*/
	ll ans=INF;

	for(int i=0;i<c;i++){
		for(int j=0;j<c;j++){
			if(i!=j)for(int k=0;k<c;k++){
						if(i!=k&&j!=k){
							ll cnt=0;
							for(int s=0;s<c;s++)cnt+=D[s][i]*use[0][s];
							for(int s=0;s<c;s++)cnt+=D[s][j]*use[1][s];
							for(int s=0;s<c;s++)cnt+=D[s][k]*use[2][s];
							ans=min(ans,cnt);
						}
					}
		}
	}

	cout<<ans<<endl;
}
