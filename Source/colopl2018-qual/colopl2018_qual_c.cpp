#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int use[100010];
const int mod=1000000007;
long long GCD(long long a,long long b){
if(b==0)return a;
else return GCD(b,a%b);
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll A,B;cin>>A>>B;
	vector<ll> even,odd;
	for(ll i=A;i<=B;i++){
		if(i%2)odd.push_back(i);
		else even.push_back(i);
	}
	int ans=0;
	int o=odd.size();
	for(int i=0;i<(1<<o);i++){
		bool isok =true;
		for(int j=0;j<o;j++){
			for(int k=j+1;k<o;k++){
				if((i&(1<<j))&&(i&(1<<k))&&GCD(odd[j],odd[k])!=1){
					isok=false;
					break;
				}
			}
		}
		if(!isok) continue;
		ans++;
		
		for(int j=0;j<even.size();j++){
			bool isok2=true;
			for(int k=0;k<o;k++){
				if((i&(1<<k))&&GCD(odd[k],even[j])!=1){
					isok2=false;
					break;
				}
			}
			if(isok2)ans++;
		}

		
	}
	cout<<ans<<endl;
}
