#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,c,x,y;
	cin >> a >> b >> c >> x >> y;
	int use = min(a+b,2*c);
	int use2 = min(a,2*c);
	int use3=min(b,2*c);
	if(x<y) cout << x*use+(y-x)*use3 << endl;
	else cout << y*use+(x-y)*use2 << endl;
}
