#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector< pair<int,int> >A(n);
	for(int i=0;i<n;i++)cin>>A[i].first>>A[i].second;
	ll ans=0;
	sort(A.begin(),A.end()); 
	for(int i=1;i<n;i++){
		ans+=min(A[i].first-A[i-1].first,A[i-1].second-A[i].second);
	}
	ans+=A[n-1].second;
	ans+=A[0].first-1;
	cout<<ans+1<<endl;
}
