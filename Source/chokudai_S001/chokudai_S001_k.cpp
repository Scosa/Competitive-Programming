#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod=1000000007;

const int MAX_N=100200;



ll fact[MAX_N];//階乗


void setFact(int N){
	N++;
	fact[0]=1;
	for(int i=1;i<N;i++){
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
}




ll bit[MAX_N+1],n;


ll sum(int i){
	ll s=0;
	while(i>0){
		s+=bit[i];
		i-=i & -i;
	}
	return s;
}

void add(int i,int x){
	while(i<=n){
		bit[i]+=x;
		i+=i&-i;
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	setFact(n);
	ll ans=0;
	for(int i=0;i<n;i++){
	//	if(i==2)cout<<A[i]-sum(A[i])-1<<' '<<fact[n-1-i]<<endl;;
	//	cout<<sum(2)<<endl;
		ans+=(A[i]-sum(A[i])-1)*fact[n-1-i]%mod;
		add(A[i],1);
		if(i==n-1)ans++;
	//	add(2,10);
	//	cout<<ans<<endl;
	}

	cout<<ans%mod<<endl;


	
}
