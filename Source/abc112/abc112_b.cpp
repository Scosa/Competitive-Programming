#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n,t;
	cin >> n >> t;
	vector<int> vec;
	for(int i=0;i<n;i++){
		;int k,l;
		cin >> k >> l;
		if(l>t)continue;
		vec.push_back(k);
	}
	if(vec.empty()){cout << "TLE" << endl;return 0;}

	int ans=100000;
	for(int i=0;i<vec.size();i++){
		ans =min(ans,vec[i]);
	}

	cout << ans << endl;
}
