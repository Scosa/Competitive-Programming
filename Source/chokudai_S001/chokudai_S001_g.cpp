#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string S="";

int main() {
  	int n;
    cin>>n;
    for(int i=0;i<n;i++){
		string s;cin>>s;
		S+=s;
	}
    ll p=1,ans=0,mod=1000000007;

    for(int i=S.size()-1;i>=0;i--){
        ans+=p*(long long)(S[i]-'0');
        p*=10;
		p%=mod;
		ans%=mod;
    }
    cout<<ans<<endl;
	return 0;
}

