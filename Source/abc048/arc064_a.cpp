#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,x;
	cin>>n>>x;
	vector<int> A(n);
	ll ans=0;
	int small=1000000003;
	int idx;
	for(int i=0;i<n;i++){
		cin>>A[i];
		if(A[i]>x)ans+=A[i]-x,A[i]=x;
		if(small>A[i])small=A[i],idx=i;
	}

	for(int i=idx;i<n-1;i++){
		if(A[i+1]-x+A[i]<0)continue;
		ans+=A[i+1]-x+A[i];
		A[i+1]=x-A[i];
	}
	for(int i=idx;i>0;i--){
		if(A[i-1]-x+A[i]<0)continue;
		ans+=A[i-1]-x+A[i];
		A[i-1]=x-A[i];
	}

	cout<<ans<<endl;

}
