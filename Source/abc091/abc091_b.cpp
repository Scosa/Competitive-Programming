#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >>n;
	map<string,int> mp;
	for(int i=0;i<n;i++){
		string k;
		cin >> k;
		mp[k]++;
	}
	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		string k;
		cin >> k;
		mp[k]--;
	}
	int ans=0;

	
	for(auto ite=mp.begin();ite!=mp.end();++ite){
		//cout << ite->first << " " <<ite->second << endl;
		if(ans<ite->second)ans=ite->second;
	}

	cout << ans << endl;
}
