#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 30;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int x, y;
	cin >> x >> y;

	int a =  y - x; if(a < 0) a = INF;
	int b = -y - x + 1; if(b < 0) b = INF;
	int c =  y + x + 1; if(c < 0) c = INF;
	int d =  -y + x + 2; if(d < 0) d = INF;
	int ans = min({a, b, c, d});

	cout << ans << endl;

}
