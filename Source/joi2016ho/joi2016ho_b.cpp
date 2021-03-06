#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=1000000;
vector<ll> J(101001);
vector<ll> I(101001);


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);


	int n;
	string s;
	cin>>n>>s;
	if(n<3){cout<<0<<endl;return 0;}
	
	ll ans_O=0;
	ll ans_J=0;
	ll ans_I=0;

	for(int i=0;i<n;i++){
		if(s[i]=='J')J[i]++;
		if(i==n-1)break;
		J[i+1]+=J[i];		
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]=='I')I[i]++;
		if(i==0)break;
		I[i-1]+=I[i];		
	}
	ll cnt=0;
	for(int i=0;i<n;i++){
		if(i!=0)cnt=max(cnt,J[i-1]*I[i]);
		if(i==0){
			if(s[i]=='O')ans_J+=I[i+1];
		}
		else if(i==n-1){
			if(s[i]=='O')ans_I+=J[i-1];
		}
		else {

			if(s[i]=='O'){
				ans_O+=J[i-1]*I[i+1];
				ans_J+=(J[i-1]+1)*I[i+1];
				ans_I+=J[i-1]*(I[i+1]+1);
			}
		}
	}


	ll ans=max(ans_J,max(ans_I,ans_O+cnt));
	cout<<ans<<endl;

}
