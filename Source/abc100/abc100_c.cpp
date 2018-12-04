#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll clac_two(ll a){
	ll ret=0;
	while(a){
		if(a%2==1)break;
		a/=2;
		++ret;
	}
	return ret;
}




	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n;
	cin >> n;
	vector<ll> vec(n);
	for(int i=0;i<n;i++)cin >> vec[i];

	//algorithm
	ll sum=0;
	for(int i=0;i<n;i++)sum+=clac_two(vec[i]);

	//output
	cout << sum << endl;
}



