#include <bits/stdc++.h>
using namespace std;
bool dp[10001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,c,s;
	cin >> a  >> b >> c >> s;
	if(a+b+c <= s && a+b+c+3>=s) cout << "Yes" << endl;
	else cout << "No" << endl;
}
