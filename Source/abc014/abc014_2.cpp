#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;









int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n,k;
	cin >> n >> k;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(k&(1<<i))sum+=vec[i];
	}
	cout << sum << endl;
}
