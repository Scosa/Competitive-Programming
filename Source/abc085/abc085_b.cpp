#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >>n;
	set<int> s;
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		s.insert(k);
	}
	cout << s.size() << endl;
}
