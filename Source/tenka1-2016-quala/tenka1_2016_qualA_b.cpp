#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



ll ans;

void dfs_w(int u, vector<vector<int> >& G, vector<int>& A, vector<int>& w) {
	w[u] = INT_MAX;
	for (int v: G[u]) {
		dfs_w(v, G, A, w);
		w[u] = min(w[u], w[v]);
	}
	if (w[u] == INT_MAX) w[u] = A[u];
}

void dfs_natural(int u, int x, vector<vector<int> >& G, vector<int>& w) {
	for (int v: G[u]) {
		int k = w[v] - x;
		ans += k;
		dfs_natural(v, x + k, G, w);
	}
}

int main() {
	int N, M; cin >> N >> M;
	vector<vector<int> > G(N);
	for (int u = 1; u < N; u++) {
		int p; cin >> p;
		G[p].push_back(u);
	}
	vector<int> A(N);
	while (M--) {
		int u, x; cin >> u >> x;
		A[u] = x;
	}
	vector<int> w(N);
	dfs_w(0, G, A, w);

	dfs_natural(0, 0, G, w);

	cout << ans << endl;
}

