#include <bits/stdc++.h>
using namespace std;
int dp[302][302];
string s;

int rec(int l, int r){
	if(dp[l][r] != -1) return dp[l][r]; 
	if(abs(r - l) <= 1) return dp[l][r] = 0;
	if(abs(r - l) == 2) {
		if(s[r] == 'i' && s[l] == 'i' && s[l + 1] == 'w') return dp[l][r] = 1;
	}
	if(s[r] == 'i' && s[l + 1] == 'w' && s[l] == 'i' && rec(l + 2, r -1) * 3 == (r - 1 - (l + 2) + 1)) return dp[l][r] = ((r - 1 - (l + 2) + 1)) / 3 + 1;
	if(s[l] == 'i' && s[r - 1] == 'w' && s[r] == 'i' && rec(l + 1, r - 2) * 3 == ((r - 2) - (l + 1) + 1)) return dp[l][r] = ((r - 2) - (l + 1) + 1) / 3 +1;
	else {
		int res = 0;
		for(int i = l + 1; i < r; i++){
			res = max(res, rec(l, i) + rec(i + 1,r));
		}
		return dp[l][r] = res;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> s;
	memset(dp, -1, sizeof(dp));
	cout << rec(0, s.size() - 1) << endl;
}
