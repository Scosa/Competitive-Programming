#include <bits/stdc++.h>
using namespace std;



int main() {
    int n,k;
	cin >> n >> k;
	long long ans=n/k;
	if(k%2==1){
		cout << ans*ans*ans << endl;
		return 0;
	}
	k/=2;
	long long ans2=n/k;
	ans2-=ans;
		cout << ans*ans*ans+ans2*ans2*ans2 << endl;
}


