#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;vector<int> ans;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(i%2)ans.push_back(k);
		else ans.insert(ans.begin(),k);
	}

	if(n%2)for(int i=0;i<n;i++){
		cout<<ans[i]<<' ';
	}
	else for(int i=0;i<n;i++){
		cout<<ans[n-1-i]<<' ';
	}
	cout<<endl;


}

