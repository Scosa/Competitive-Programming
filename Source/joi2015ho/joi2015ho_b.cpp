#include <bits/stdc++.h>
using namespace std;
vector<long long > A(4020);
long long memo[8040][8060];
int n;


long long dfs(int l,int r) {

	if(memo[l][r]!=0) return memo[l+n][r+n] = memo[l][r];
	if((n - (r - l + 1)) % 2 == 0) {
		if(l == r) return memo[l+n][r+n] = memo[l][r] = A[l];
		else {
			return memo[l+n][r+n] = memo[l][r] = max(dfs(l+1,r) + A[l], dfs(l,r-1) + A[r]);
		}
	}
	else {
		if(l == r) return memo[l+n][r+n] = memo[l][r];
		if(A[l] > A[r]) return memo[l+n][r+n] = memo[l][r] = dfs(l+1, r);
		else return memo[l+n][r+n] = memo[l][r] = dfs(l, r-1);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i],A[i+n] = A[i];

	long long ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(dfs(i, i+n-1),ans);
	}
	cout << ans << endl;
}
