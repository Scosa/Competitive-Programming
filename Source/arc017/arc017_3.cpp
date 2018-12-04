#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,x;
	cin>>n>>x;
	vector<int> W(n);
	for(int i=0;i<n;i++)cin>>W[i];

	map<ll,int> mp;
	

	if(n%2==1){
	int use=(n+1)/2;
	for(int i=0;i<(1<<use);i++){
		ll cnt=0;
		for(int j=0;j<use;j++){
			if(i&(1<<j))cnt+=W[j];
		}
		mp[cnt]++;
		//cout<<cnt<<endl;
	}


	use=n/2;
	for(int i=0;i<(1<<use);i++){
		ll cnt=0;
		for(int j=0;j<use;j++){
			if(i&(1<<j))cnt+=W[use+j+1];
		}
		if(x-cnt<0)continue;
		ans+=mp[x-cnt];
	}
}
else {
	int use=n/2;
	for(int i=0;i<(1<<use);i++){
		ll cnt=0;
		for(int j=0;j<use;j++){
			if(i&(1<<j))cnt+=W[j];
		}
		mp[cnt]++;
		//cout<<cnt<<endl;
	}



	for(int i=0;i<(1<<use);i++){
		ll cnt=0;
		for(int j=0;j<use;j++){
			if(i&(1<<j))cnt+=W[use+j];
		}
		if(x-cnt<0)continue;
		ans+=mp[x-cnt];
	}
}

	cout<<ans<<endl;
}

