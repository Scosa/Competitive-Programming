#include <bits/stdc++.h>
using namespace std;
bool use[202020];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin >> s;
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i < n; i++){
		string t;
		cin >> t;
		t += t;
		for(int j = 0; j + s.size() < 20; j++) {
			if(s == t.substr(j, s.size())) {
				ans++;
				break;
			}
		}
	}
	cout << ans << endl;
}
