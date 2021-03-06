#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n;
	cin>>n;
	vector<pair<ll,ll> > A(n+1);
	for(int i=1;i<n+1;i++)cin>>A[i].first,A[i].second=i;

	sort(A.begin(),A.end());

	set <ll> s;
	s.insert(0);
	s.insert(n+1);
	set<ll> s2;
	s2.insert(0);
	s2.insert(-(n+1));
	ll ans=0;
	for(int i=1;i<=n;i++){
		ans+=A[i].first*(*s.upper_bound(A[i].second)-A[i].second)*(*s2.upper_bound(-A[i].second)+A[i].second);
		s.insert(A[i].second);
		s2.insert(-A[i].second);
	}

	cout<<ans<<endl;
}
