#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	n*=3;
	vector<int> vec(n);

	for(int i=0;i<n;i++){
		cin >> vec[i];
	}

	sort(vec.begin(),vec.end());

	ll sum=0;
	n/=3;
	for(int i=1;i<n+1;i++) sum+=vec[n*3-2*i];

	cout << sum << endl;
	
}



