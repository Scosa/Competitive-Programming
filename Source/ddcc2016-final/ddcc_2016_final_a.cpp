#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int r,c;
	cin >> r >> c;
	int use =(r+c-1)/c;int ans=0;
	for(int i=0;i<2*use+1;i++)for(int j=0;j<2*use+1;j++){
		if(use==i||use==j)continue;
		int use2=c*abs(i-use);
		int use3=c*abs(j-use);
		if(use2*use2+use3*use3<=r*r)ans++;

	}
	cout << ans << endl;
}
