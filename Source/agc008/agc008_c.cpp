#include <bits/stdc++.h>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long  a,b,c,d,e,f,g;
	cin >> a >> b >> e >> c >> d >> f >> g;
	long long ans1;
	long long ans2;
	ans1 = a / 2 * 2 + c / 2 * 2 + d / 2 * 2 + b;
	if(a > 0 && d > 0 && c > 0) ans2 = (a - 1) / 2 * 2 + (c - 1) / 2 * 2 + (d - 1)/2 * 2 + 3 + b;
	cout << max(ans1, ans2) << endl;
	
}
