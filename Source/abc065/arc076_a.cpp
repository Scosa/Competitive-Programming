#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll  mod = 1000000007;
ll cluc(int s){
	ll res=1;
	for(int i=1;i<=s;i++) res*=i,res%=mod;
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	if(abs(n-m)>1){
		cout<<0<<endl;
		return 0;
	}
	if(n==m){
		cout<<(2*cluc(n)*cluc(m))%mod<<endl;
	}
	else {
		cout<< (cluc(n)*cluc(m))%mod<<endl;
	}




}

