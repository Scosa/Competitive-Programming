#include <bits/stdc++.h>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
		vec[i]--;
	}
	int ans=0;

	for(int i=0;i<n;i++){
		if(vec[vec[i]]==i)ans++;
	}

	cout << ans/2 << endl;
}
