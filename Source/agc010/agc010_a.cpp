#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	int cnt=0;
	
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		if(k%2==1)cnt++;
	}

	if(cnt%2==1) cout << "NO" << endl;
	else cout << "YES" << endl;
	
}



