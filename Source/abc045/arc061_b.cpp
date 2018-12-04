#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll h,w,n;
	cin>>h>>w>>n;
	map<pair<ll,ll> ,ll>mp;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		a--;b--;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				int dx=a-i;
				int dy=b-j;
				if(0<=dx&&dx<h-2&&0<=dy&&dy<w-2){
					mp[make_pair(dx,dy)]++;
				}
			}
		}
	}
	vector<ll> ans(10);
	for(auto i:mp){
	//	cout<<i.first.first<<' '<<i.first.second<<' ' <<i.second<<endl;
		ans[i.second]++;
	}

	ans[0]=(h-2)*(w-2)-mp.size();
	for(int i=0;i<=9;i++){
		cout<<ans[i]<<endl;
	}
}

