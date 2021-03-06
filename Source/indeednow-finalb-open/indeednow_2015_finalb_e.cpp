#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=100010;
ll bit[MAX_N+1],n;
//[1,n]

ll sum(int i){
	ll s=0;
	while(i>0){
		s+=bit[i];
		i-=i&-i;
	}
	return s;
}

void add(int i,int x){
	while(i<=n){
		bit[i]+=x;
		i+=i&-i;
	}
}







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;
	vector<int> H(n);
	vector<int> use(n);
	bool ok=true;
	unordered_map <int,int> up;
	for(int i=0;i<n;i++){
		cin>>H[i],use[i]=H[i];
		if(up[H[i]]==1)ok=false;
		up[H[i]]=1;
	}
	if(!ok){
		cout<<-1<<endl;return 0;
	}
	sort(use.begin(),use.end());
	map<int,int> mp;
	for(int i=1;i<=n;i++){
		mp[use[i-1]]=i;
	}



	ll ans=0;
	for(int j=0;j<n;j++){
		ans+=H[j]*(sum(n)-sum(mp[H[j]]));
		add(mp[H[j]],1);
	}

	cout<<ans<<endl;
}
