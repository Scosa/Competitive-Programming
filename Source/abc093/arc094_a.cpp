#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	vector<int>vec(3);
	cin >> vec[0] >> vec[1]  >> vec[2];
	sort(vec.begin(),vec.end());

	int ans=0;
	ans+=vec[2]-vec[1];
	if((vec[1]-vec[0])%2==0)ans+=(vec[1]-vec[0])/2;
	else ans+=((vec[1]-vec[0])+1)/2+1;
	cout << ans << endl;

}
