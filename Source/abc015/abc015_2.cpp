#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;









int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n;
	cin >> n;
	int sum=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		if(k==0)continue;
		sum+=k;
		cnt++;
	}

	cout << (sum+cnt-1)/cnt << endl;
}
