#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,d,l;
	cin >> l >> a >> b >> c >> d ;
	cout << l - max((a + c - 1) / c,(b + d - 1)/ d) << endl;
}
