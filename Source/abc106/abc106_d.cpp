#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mas[501][501];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m,q;cin>>n>>m>>q;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		mas[a][b]++;
		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			mas[i][j]+=mas[i][j-1];
		}
	}
	/*cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cout<<mas[i+1][j+1]<<' ';
		cout<<endl;
	}cout<<endl;*/
	for(int i=0;i<q;i++){
		int a,b;cin>>a>>b;int ans=0;
		for(int i=a;i<=b;i++)ans+=mas[i][b]-mas[i][a-1];
		cout<<ans<<endl;
	}
}
