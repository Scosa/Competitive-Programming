#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*bool is_prime(int n){//素数判定
	for(int i=2;i*i<=n;i++)if(n%i==0)return false;
	return true;
}

vector<int> divisor(int n){//約数列挙
	vector<int> res;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			res.push_back(i);
			if(i!=n/i)res.push_back(n/i);
		}
	}
	sort(res.begin(),res.end());
	return res;
}*/

map<int,int> prime_factor(int n){
	map<int,int> res;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			++res[i];
			n/=i;
		}
	}
	if(n!=1)res[n]=1;
	return res;
}	 		
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
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;cin>>n>>m;
	map<int,int> mp=prime_factor(m);
	setFact(30+n);
	ll ans=1;
	for(auto i:mp){
		ans*=getC(i.second+n-1,i.second);
		ans%=mod;
	}

	cout<<ans<<endl;
}
