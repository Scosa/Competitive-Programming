#include <bits/stdc++.h>
using namespace std;
typedef long long ll;








int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		if(k==1)ans=i+1;
	}
	cout<<ans<<endl;
}
