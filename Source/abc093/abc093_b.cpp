#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long a,b;
	int k;
	cin >> a >> b >> k;

	for(int i=a;i<=b;i++){
		if(i<=a+k-1) cout << i << endl;
		else if(b-k+1<=i) cout << i << endl;
	}


}
