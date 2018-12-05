#include <bits/stdc++.h>
using namespace std;
int n;
vector<long long > A(201010);
long long use;

bool ok(long long t){
	for(int i = 0; i < n; i++){
		int cnt1 = lower_bound(A.begin() + i, A.begin() + i + n, use + A[i]) - A.begin();
		if(cnt1 == n + i) continue;
		int cnt2 = lower_bound(A.begin() + cnt1 + 1, A.begin() + i + n, use + A[cnt1]) - A.begin();
		if(cnt2 == n + i) continue;
		//if(use == 9) cout << i << ' ' << cnt1 << ' ' << cnt2 << endl;
		if(A[n + i] - A[cnt2] >= use)return true;
	}
	return false;
}

long long  binary_search(long long s){
	long long l = 0;
	long long r = s + 1;
	while(r - l > 1) {
		long long m = l + (r - l) / 2;
		use = m;
		if(ok(m)) l = m;
		else r = m;  
	}
	return l;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

	cin >> n;

	A[0] = 0;
	for(int i = 1; i <= n; i++) cin >> A[i], A[i] += A[i - 1],A[n + i] = A[i]; 
	for(int i = n + 1; i <= 2 * n; i++) A[i] = A[i] + A[n];

	long long ans = binary_search(1000000000000000);

	cout << ans << endl;

}