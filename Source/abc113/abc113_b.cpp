#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
typedef long long ll;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,a,t;
	cin>>n>>t>>a;
	vector<int> H(n);
	for(int i=0;i<n;i++)cin>>H[i];

	int ans=0;
	double use=abs((double)t-(double)0.006*H[0]-a);
	for(int i=0;i<n;i++){
		if(use>abs((double)t-(double)0.006*H[i]-a)){
			use=abs((double)t-(double)0.006*H[i]-a);
			ans=i;
		}
	}

	cout<<ans+1<<endl;
}
