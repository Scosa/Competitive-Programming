#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll plus1(int s){
	ll res=0;
	for(int i=0;i<=s;i++){
		res+=i;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<ll> A(n);
	for(int i=0;i<n;i++)cin>>A[i];

	ll ans=0;
	ll cnt=0;
	int l=0;
	for(int i=0;i<n;i++){
		bool ok=true;
		for(int j=0;j<20;j++){
			if((cnt&A[i])&(1<<j))ok=false;
		}
		if(ok){
			cnt+=A[i];
		}
		else{
			//ans+=plus1(i-l);
			bool flag2=true;
			while(flag2){
				cnt-=A[l];
				flag2=false;
				for(int j=0;j<20;j++){
					if((cnt&A[i])&(1<<j))flag2=true;
				}
				l++;
			}
			cnt+=A[i];
			
		}
		ans+=(i-l)+1;
	}



	cout<<ans<<endl;

}
