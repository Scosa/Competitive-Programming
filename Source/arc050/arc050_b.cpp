#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll r,b,x,y;





bool check(ll s){
	ll use1=r-s;
	ll use2=b-s;
	return use1/(x-1)+use2/(y-1)<s;
}


ll binary_search(ll n) {
	ll left = 0;
	ll right = n+1;
	while (right - left > 1) {
		ll mid = left + (right - left) / 2;
		if (check(mid)) right = mid;
		else left=mid;
	}
	return left;
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);


	cin>>r>>b>>x>>y;
	ll c=min(r,b);
	ll a=binary_search(c);
	//if(a<0)a=0;
	
	cout<<a<<endl;
}

