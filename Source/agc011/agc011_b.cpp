#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
typedef long long ll;






int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];

	sort(A.begin(),A.end());
	ll cnt=A[0];
	ll ans=1;
	for(int i=1;i<n;i++){
		if(cnt*2>=A[i]){
			ans+=1;
		}
		else ans=1;

		cnt+=A[i];
	}

	cout<<ans<<endl;
}
