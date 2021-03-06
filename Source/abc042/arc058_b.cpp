#include <bits/stdc++.h>
using namespace std;
const int mod=1000000007;
typedef long long ll;
const int MAX_N=1000000;

ll mod_pow(ll x,ll n,ll mod){
if(n==0)return 1;
ll res=mod_pow(x*x%mod,n/2,mod);
if(n&1)res=res*x%mod;
return res;
}

ll fact[MAX_N];//階乗
ll revFact[MAX_N];//階乗の逆元

void setFact(int N){
	N++;
	fact[0]=1;
	for(int i=1;i<N;i++){
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
	revFact[N-1]=mod_pow(fact[N-1],mod-2,mod);
	for(int i=N-2;i>=0;i--){
		revFact[i]=revFact[i+1]*(i+1);
		revFact[i]%=mod;
	}
}

ll getC(int a,int b){
	if(a<b)return 0;
	return (((fact[a]*revFact[b])%mod)*revFact[a-b])%mod;
}

int main(){
	int h,w,a,b;
	cin>>h>>w>>a>>b;
	setFact(h+w);
	ll ans=0;
	int x=b-1;
	int y=h-a;

	while(1){
		x++;y--;
		//cout<<x<<' '<<y<<endl;
		if(x>w||y<0)break;
		ans+=getC(x+y,x)*getC((h-y-1)+(w-x-1),(w-x-1));
		ans%=mod;
	}

	cout<<ans<<endl;

}
