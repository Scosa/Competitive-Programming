#include <bits/stdc++.h>
using namespace std;
#define bye return 0;
int n;
vector<int> vec(100001);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input;
	cin >> n;
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		vec[k]++;
	}
	int ans =-1;

	for(int i=1;i<100000;i++) ans = max(ans,vec[i]+vec[i-1]+vec[i+1]);

	cout << ans << endl;

}
