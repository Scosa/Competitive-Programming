#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int n,k;cin>>n>>k;
	vector<int> R(n);
	for(int i=0;i<n;i++)cin>>R[i];

	sort(R.begin(),R.end());

	double ans=0.0;

	for(int i=n-k;i<n;i++){
		ans=(double)(ans+R[i])/2;
	}

	cout<<fixed<<setprecision(10)<<ans<<endl;
}
