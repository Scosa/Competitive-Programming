#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dight_sum(int a){
	ll v=0;
	while(a){
		v+=a%10;
		a/=10;
	}
	return v;
}




	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n;
	cin >> n;
	ll ans = dight_sum(n);
	if(ans==1)cout << 10 << endl;
	else cout << ans <<endl;
	
}



