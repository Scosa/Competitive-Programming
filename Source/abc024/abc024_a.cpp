#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,k,s,t;
	cin >> a >> b >> c >> k >>s>> t;
	if(s+t<k)cout << a*s+b*t << endl;
	else cout << s*a+b*t-(s+t)*c << endl;
}
