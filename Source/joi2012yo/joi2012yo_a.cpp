#include <bits/stdc++.h>
using namespace std;
bool use[202020];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	cout << max(0, min({a,b,c}) + min(d,e) - 50) << endl;
}
