#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;map<int,int> mp;
	for(int i=0;i<n;i++){	
		int k;cin>>k;mp[k]++;
	}

	int m;cin>>m;bool ok=true;
	for(int i=0;i<m;i++){
		int k;cin>>k;
		if(mp[k]==0)ok=false;
		else mp[k]--;
	}
	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
