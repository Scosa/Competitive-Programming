#include <bits/stdc++.h>
using namespace std;
#define bye return 0;
typedef long long ll;
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,x;
	cin >> n >> x;
	vector<int> vec(n);
	ll a=0;
	for(int i=0;i<n;i++) cin >> vec[i],a+=vec[i];
	if(a<x) {cout << n-1 << endl;bye;}

	sort(vec.begin(),vec.end());
	int ans = 0;
	ll sum=0;
	for(int i = 0;i<n;i++){
		sum +=vec[i];
		if(sum>x) break;
		ans++;
	}

	cout << ans  << endl;
 }



