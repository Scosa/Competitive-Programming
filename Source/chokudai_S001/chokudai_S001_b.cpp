#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	ll ans=0;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		ans+=k;
	}
	cout<<ans<<endl;
}
