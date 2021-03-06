#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h, w, n;
	cin >> h >> w >> n;
	vector<int> X(n),Y(n);
	for(int i = 0; i < n; i++) cin >> X[i] >> Y[i];

	int ans = 0;
	for(int i = 1; i < n; i++){
		if(X[i-1] < X[i] && Y[i-1] < Y[i]){
			int use = min(X[i] - X[i-1], Y[i] - Y[i-1]);
			int use2 = max(X[i] - X[i-1], Y[i] - Y[i-1]);
			ans += use + (use2 - use);
		}
		else if(X[i-1] > X[i] && Y[i-1] > Y[i]){
			int use = min(X[i-1] - X[i], Y[i-1] - Y[i]);
			int use2 = max(X[i-1] - X[i], Y[i-1] - Y[i]);
			ans += use + (use2 - use);
		}
		else {
			ans += abs(X[i] - X[i-1]) + abs(Y[i] - Y[i-1]);
		}
	}

	cout << ans << endl;

}
