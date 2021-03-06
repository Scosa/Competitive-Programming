#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	long long ans = -191010101;
	vector<int> A(n);
	long long sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> A[i];
		if(i < k) sum += A[i];
		else {
			sum -= A[i-k];
			sum += A[i];
			ans = max(ans, sum);
		}
	}

	cout << ans << endl;
}
