#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(j*(n-i)+i*(m-j)==k){
				cout<<"Yes"<<endl;return 0;
			}
		}
	}

	cout<<"No"<<endl;


}
