#include <bits/stdc++.h>
using namespace std;
typedef long long ll;






int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int ans=0;
	for(int i=0;i<8;i++){
		int k;cin>>k;ans=max(ans,k);
	}
	cout<<ans<<endl;
}
