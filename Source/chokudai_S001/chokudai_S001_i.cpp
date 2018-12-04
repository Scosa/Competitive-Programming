#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];


	set<ll> S;
	ll ans=0;
	ll sum=0;
	for(int i=0;i<n;i++){
		S.insert(sum);
		sum+=A[i];
		ans+=S.count(sum-n);
	}
	cout<<ans<<endl;
}
