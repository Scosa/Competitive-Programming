#include <bits/stdc++.h>
using namespace std;
bool use[202020];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> W(10),V(10);
	for(int i = 0; i < 10; i++) cin >> W[i];
	for(int i = 0; i < 10; i++) cin >> V[i];
	sort(W.begin(),W.end());
	sort(V.begin(),V.end());
	int W_ans = W[9] + W[8] + W[7];
	int V_ans = V[9] + V[8] + V[7];
	cout << W_ans << ' ' << V_ans << endl;
}
