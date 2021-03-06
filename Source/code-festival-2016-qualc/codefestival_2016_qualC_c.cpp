#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int use[100010];
const int mod=1000000007;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;vector<int> T(n),A(n);
	for(int i=0;i<n;i++)cin>>T[i];
	for(int i=0;i<n;i++)cin>>A[i];
	bool ok=true;
	if(n==1&&T[0]!=A[0]){
		cout<<0<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		int check=max(T[i],A[i+1]);
		if(check<A[0]||check<T[n-1]) ok=false;
	}
	if(!ok){
		cout<<0<<endl;
		return 0;
	}

	int cnt=0;
	for(int i=0;i<n-1;i++){
		if(cnt<T[i])use[i]=1,cnt=T[i];
	}
	cnt=0;
	for(int i=n-1;i>=0;i--){
		if(cnt<A[i])use[i]=1,cnt=A[i];
	}
	for(int i=0;i<n;i++){
		if(!use[i])use[i]=min(A[i],T[i]);
	}

	ll ans=1;
	for(int i=0;i<n;i++){
		ans*=use[i];
		ans%=mod;
	}
	cout<<ans<<endl;
}
