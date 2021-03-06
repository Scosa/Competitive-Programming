#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> R(n+2,0);
	vector<int> L(n+2,0);
	vector<int> V;
	bool normal = true;
	for(int i = 0; i < k; i++) {
		int s;
		cin >> s;
		if(s == 0) normal = false;
		else V.push_back(s);
	} 
	sort(V.begin(), V.end());
	for(int i = 0; i < V.size(); i++) {
		R[V[i]] = R[V[i] - 1] + 1;
	}
	for(int i = V.size() - 1; i >= 0; i--){
		L[V[i]] = L[V[i] + 1] + 1;
	}


	int ans = 0;
	for(int i = 1; i <= n; i++) ans = max(ans, R[i]);

	if(!normal){
		for(int i = 1; i <= n; i++) {
			if(R[i] == 0) ans = max(ans, R[i - 1] + L[i + 1] + 1);
		}
	}

	cout << ans << endl;
}
