#include <bits/stdc++.h>
using namespace std;
typedef long long ll;








int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector<int> ans(n);
	for(int i=0;i<n;i++)cin>>ans[i];
	sort(ans.begin(),ans.end());
	for(int i=0;i<n;i++)cout<<ans[i]<<' ';
	cout<<endl;
}
