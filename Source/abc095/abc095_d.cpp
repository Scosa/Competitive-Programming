#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
  ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, c;
	cin >> n >> c;
	vector<int> V(n), RX(n + 1, 0), LX(n + 1, 0), RV(n + 1, 0), LV(n + 1, 0);
	for(int i = 0; i < n; i++){
		cin >> RX[i + 1] >> V[i];
	}
	for(int i = 1; i <= n; i++) {
		LX[n - i + 1] = c - RX[i];
		RV[i] += RV[i - 1] + V[i - 1];
		LV[i] += LV[i - 1] + V[n - i];
	}
	
	int use = 0;
	int ans = 0;
	for(int i = 0; i < n; i++){
		int cnt = RV[n - i] - RX[n - i];
		ans  = max(ans, cnt);
		use = max(use, LV[i] - 2 * LX[i]);
		cnt += use;
		ans = max(ans, cnt);
	}
	use = 0;
	for(int i = 0; i < n; i++){
		int cnt = LV[n - i] - LX[n - i];
		ans  = max(ans, cnt);
		use = max(use, RV[i] - 2 * RX[i]);
		cnt += use;
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}