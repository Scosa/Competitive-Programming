#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> A(n), ans(n,0), B(m);
	for(int i = 0; i < n; i++) cin >> A[i];
	for(int i = 0; i < m; i++) {
		cin >> B[i];
		for(int j = 0; j < n; j++){
			if(B[i] >= A[j]) {
				ans[j]++;
				break;
			}
		}
	}

	int pos=0;
	for(int i = 0; i < n; i++) if(ans[pos] < ans[i]) pos = i;
	cout << pos + 1 << endl;

}
