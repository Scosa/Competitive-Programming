#include <bits/stdc++.h>
using namespace std;
typedef long long ll;






int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	map<int,int> mp;
	for(int i=0;i<2*m;i++){
		int k;
		cin>>k;
		mp[k]++;
	}

	for(auto i:mp){
		if(i.second%2==1){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}
