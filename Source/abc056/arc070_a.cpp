#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	int ans=0;
	long long  sum=0;
	while(sum<n){
		ans++;
		sum+=ans;
	}
	cout<<ans<<endl;
}
