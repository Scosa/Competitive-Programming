#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	long long ans = 1e18;
	for (long long i = 1; i <= n; i++) {
		for (long long j = i; i * j <= n; j++) {
			ans = min(ans, abs(i - j) + (n - i * j));
		}
	}
	cout << ans << endl;
}

