#include <bits/stdc++.h>
using namespace std;


using namespace std;
typedef long long ll; 

int main(){
	int n;
	cin  >> n;
	vector<ll> vec(n);
	for(int i=0;i<n;i++)cin >> vec[i];

	ll ans=0;
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=vec[i];
		if(vec[i]==0||i==n-1){ans+=sum/2;sum=0;continue;}
	}

	cout << ans << endl;
}

