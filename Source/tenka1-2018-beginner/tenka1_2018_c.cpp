#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n;
	cin>>n;
	vector<ll> A(n);
	for(int i=0;i<n;i++)cin>>A[i];

	sort(A.begin(),A.end());
	if(n==2){
		cout<<A[1]-A[0]<<endl;
	}
	else if(n==3){
		ll ans1=(A[1]+A[2])-2*A[0];
		ll ans2=(A[2]*2-(A[0]+A[1]));
		cout<<max(ans1,ans2)<<endl;
	}
	else if(n%2==0){
		ans=0;
		for(int i=0;i<n/2;i++){
			
			if(i==0)ans+=(A[n-1]+A[n-2])-2*A[i];
			else if(i==n/2-1) ans+=A[i+2]-A[i];
			else{
				ans+=(A[n-1-i+1]+A[n-1-i-1])-2*A[i];
			}
			//cout<<ans<<endl;
		}
		cout<<ans<<endl;return 0;
	}
	else{
		
		ll cnt=0;
		for(int i=0;i<n/2;i++){
			
			if(i==0)cnt+=(A[n-1]+A[n-2])-2*A[i];
			else{
				cnt+=(A[n-i-1+1]+A[n-i-1-1])-2*A[i];
			}
			//cout<<ans<<endl;
		}
		//cout<<cnt<<endl;
		ans=0;
		for(int i=0;i<(n+1)/2;i++){
			
			if(i==0)ans+=(A[n-1]+A[n-2])-2*A[i];
			else if(i==(n+1)/2-2) ans+=A[i+2]-A[i];
			else if(i==(n+1)/2-1) ans+=A[i+2]-A[i];
		
			else{
				ans+=(A[n-i-1+1]+A[n-i-1-1])-2*A[i];
			}
			//cout<<ans<<endl;
		}
		ans=max(ans,cnt);
		cout<<ans<<endl;

	
	}
}

