#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t,a,b,c,d;
	cin >> t >> a >> b >> c >> d;
	if(a + c <= t) cout << b + d << endl;
	else if(c <= t) cout << d << endl;
	else if(b <= t)cout << b << endl;
	else cout << 0 << endl; 
}
