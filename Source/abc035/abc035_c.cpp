#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<int> vec(n+1);
	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int q;
	cin >> n >> q;
	vector<int> vec(n+1);
	for(int i=0;i<q;i++){
		int k,l;
		cin >> k >> l;
		vec[k-1]++;
		vec[l]--;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=vec[i];
		if(sum%2==0)cout << 0;
		else cout << 1;
	}
	cout << endl;
 }



